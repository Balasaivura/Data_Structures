//setting hours
#include <lpc21xx.h>
#include "types.h"
int ch;
#include "kpm.h"
#include "lcd.h"
#include "rtc.h"
#include "delay.h"
//setting hour
u32 SetHour()
{ int H=0;
while(1)
{
while(ColScan()==0);
ch=KeyScan();
//delay_ms(200);
//while(ColScan()==0);
U32LCD(ch);
delay_ms(100);
if(ch>=0&&ch<=9)
{
H=(H*10)+ch;
}
else
{
break;
}
}
//U32LCD(H);
if(H>=0&&H<=23)
return H;
else
return 23;
}
//setting min
s32 SetMin()
{  int M=0;
while(1)
{
while(ColScan()==0);
ch=KeyScan();
U32LCD(ch);
delay_ms(100);
if(ch>=0&&ch<=9)
{
M=(M*10)+ch;
}
else
{
break;
}
}
//U32LCD(M);
if(M>=0&&M<=59)
return M;
else
return 59;
}
//set day
s32 SetDay()
{ int day=0;
while(1)
{
while(ColScan()==0);
ch=KeyScan();
U32LCD(ch);
delay_ms(100);
if(ch>=0&&ch<=9)
{
day=(day*10)+ch;
}
else
{
break;
}
}
if(day>=1&&day<=31)
return day;
else
return 31;
}
//set Month
s32 SetMonth()
{ int mon=0;
while(1)
{
while(ColScan()==0);
ch=KeyScan();
U32LCD(ch);
delay_ms(100);
if(ch>=0&&ch<=9)
{
mon=(mon*10)+ch;
}
else
{
break;
}
}
if(mon>=1&&mon<=12)
return mon;
else
return 12;
}

void rtc_init()
{
  SEC=20; //Initialized seconds
  MIN=0; //Initialized minutes
  HOUR=12;//Initialized hour

  DOM=12; //Iitialization of day
  MONTH=3;//Intialization of month
  YEAR=24;//Intialization of year

}



