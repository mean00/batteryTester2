
#pragma once
#include "xpt2046.h"
#include "dso_debug.h"

#define NB_BLOCKS 10

/**
 * 
 */
XPT2046::XPT2046(SPIClass &spi, int cs,int speed) : mSPI(spi),mSettings(speed,MSBFIRST, SPI_MODE0)
{
    mCs=cs;
    mFrequency=speed;
    pinMode(mCs,OUTPUT);
    digitalWrite(mCs,HIGH);
}
/**
 * 
 */
XPT2046::~XPT2046()
{
    
}
#define CHANNEL_Z1 (3<<4) //b1 3
#define CHANNEL_Z2  (4<<4) //c1 4

#define CHANNEL_X (1<<4) //91 1

#define CHANNEL_Y  (5<<4) //d1 5

#define CHANNEL(x)  (x<<4)
// 12 bits ADC hardcoded, bit is at 0 for that
#define REF_OFF_ADC_ON 1

#define XPT_CMD(x) (0x80+REF_OFF_ADC_ON+x)

static const uint8_t READ_SEQUENCE[]=
{
  XPT_CMD(CHANNEL_Z1),0,0, // b1   0
  XPT_CMD(CHANNEL_Z2),0,0, // c1   1
  
  XPT_CMD(CHANNEL_X),0,0, // 91    2
  XPT_CMD(CHANNEL_Y),0,0, // c1    3
  

  XPT_CMD(CHANNEL_X),0,0, // 91    4 
  XPT_CMD(CHANNEL_Y),0,0, // d1    5
  
  XPT_CMD(CHANNEL_X),0,0, // 91    6
  XPT_CMD(CHANNEL_Y),0,0, // d1    7
  
  XPT_CMD(CHANNEL_X),0,0, // 91    8
  XPT_CMD(CHANNEL_Y)&0xf7,0,0, // d0   9
  
  0,0
};

/**
 * 
 * @return 
 */
bool     XPT2046::setup()
{
    return true;
}

static void pt(int r, int value)
{
    char bfer[20];
    sprintf(bfer,"%d: 0x%x",r,value);
    Serial1.println(bfer);
}
/**
 * 
 * @return 
 */

static uint8_t rx[32];  
/**
 * 
 * @param a
 * @param b
 * @param c
 * @return 
 */
int XPT2046::median(int aa, int bb, int cc,int dd)
{
    int a=mRawData[aa];
    int b=mRawData[bb];
    int c=mRawData[cc];
    int d=mRawData[dd];
    return (a+b+c+d)/4;
}
/**
 * 
 * @return 
 */
bool     XPT2046::run()
{
    
    mSPI.beginTransaction(mSettings );
    digitalWrite(mCs,LOW);       
         
    int sz=sizeof(READ_SEQUENCE);
    mSPI.dmaTransfer(READ_SEQUENCE,rx,sz);
    
    digitalWrite(mCs, HIGH);
    mSPI.endTransaction();
    
    
    // convert readings from buffer into human readable form    
    uint8_t *b=rx+1;
    for(int i=0;i<NB_BLOCKS;i++)
    {
        uint32_t c=(b[0]<<8)+(b[1]);
        b+=3;
        c>>=3; // remove the 3 non significant bits
        mRawData[i]=c;
    }
        
    int x=median(2,4,6,8);
    int y=median(3,5,7,9);

    pt(0,x);
    pt(1,y);

    return true;
}
// EOF