#include"lcd.h"
#include<LPC21xx.h>
#include "defines.h"
#include"lcd_defines.h"
#include"delay.h"
#define sw_al1 0//@p0.0
#define sw_al2 1//@p0.1
u32 cnt=0;
main()
{
	initlcd();
	cmdlcd(0x10);
	strlcd("SW_CNT_LCD");
	while(1)
	{
		if(((IOPIN0>>sw_al1)&1)==0)
		{
			cnt++;
			//cnt=cnt+'0';
			cmdlcd(0xc0);
			U32lcd(cnt);
			delay_ms(500);
			while(READBIT(IOPIN0,sw_al1)==0);

		}
		if(((IOPIN0>>sw_al2)&1)==0)
		{
			cnt--;
			//cnt=cnt+'0';
			cmdlcd(0xc0);
			U32lcd(cnt);
			delay_ms(500);
			while(READBIT(IOPIN0,sw_al2)==0);

		}
	 }
}
