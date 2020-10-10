/***************************************************
 Battery Tester
 * GPL v2
 * (c) mean 2018 fixounet@free.fr
 ****************************************************/
#pragma once
#include "screenBase.h"
#include "screenFinished.h"
#include "ad_timer.h"

#define AVERAGING_SAMPLE_COUNT 10
#define AVERAGING_SAMPLE_PERIOD 100 // 100 ms

class dischargingScreen : public batScreen
{
public:
                           dischargingScreen(   batConfig *c, int currentV);
                      void draw();
        virtual batScreen *process(const CurrentState &s); // return NULL if the current screen stays the same
        
protected:
                bool    evaluateTargetAmp(int currentV);
                int     computeGateCommand(int amp);
                void    updateInfo();
                bool    resetAverage(int mv, int mA);
                Timer   timer;
                Timer   smallTimer,debounceTimer;
                int     gateCommand;
                int     originalGateCommand;
                batScreen *goToEnd(EndOfChargeCause cause); 
                bool       computeAverage(int mV,int mA,int &avgV, int &avgA);
                bool       adjustGateVoltage(int avgA,int avgV);
                void       updateTargetCurrent(int currentMv);
                bool       LeftOrRigh(int leftRight,int mv);
                int        sampleIndex;
                int        samplema[AVERAGING_SAMPLE_COUNT];
                int        samplemv[AVERAGING_SAMPLE_COUNT];
                bool       paused;
                int        resyncing; // holdoff value
};