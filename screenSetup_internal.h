/***************************************************
 Battery Tester
 * GPL v2
 * (c) mean 2018 fixounet@free.fr
 ****************************************************/
#pragma once

//----------------
enum ItemState
{
  StateNormal,
  StateActivated,
  StateSelected
};

//----------------
class Item
{
public:
                    Item(  Adafruit_ILI9341_STM *tft,int line) {_tft=tft;_line=line;}
    virtual         ~Item() {}
    virtual void    setState(ItemState state) {_state=state;}
    virtual void    run(int leftright) {};
    virtual void    draw()=0;    
protected:
  ItemState         _state;  
  Adafruit_ILI9341_STM *_tft;
  int               _line;
};
//
class SimpleItem : public Item
{
public:
                    SimpleItem(  Adafruit_ILI9341_STM *tft, int line,const char *name ) : Item(tft,line) {_name=name;}
    virtual         ~SimpleItem() {}    
    virtual void    run(int leftright) {};
    virtual void    draw();    
protected:
    const char *_name;
};

//----------------

class TunableItem : public Item
{
public:
                TunableItem(Adafruit_ILI9341_STM *tft,int line,int *value, int mn, int mx, int inc, const char *name, const char *unit);                      
        void    draw();
        void    update();
        void    run(int leftright);
protected:
            int _min,_max,_inc;
            int *_value;
            const char *_name,*_unit;
            
};
