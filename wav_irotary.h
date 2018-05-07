/***************************************************
 Battery Tester
 * GPL v2
 * (c) mean 2018 fixounet@free.fr
 ****************************************************/

#pragma once
/**
 */
enum WavDirection
{
  WavNone=0,
  WavLeft,
  WavRight
};
/**
 */
class WavRotary
{
public:
                    WavRotary(int pinA,int pinB );
        int         getCount();
        void        interrupt();
protected:
        Rotary       _rotary;
        int          _count;
};
