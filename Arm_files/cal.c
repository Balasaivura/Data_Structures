#include <LPC21xx.h>
#include "types.h"
#include "kpm_defines.h"
#include "kpm.h"
#include "delay.h"
#include "lcd.h"
#include "lcd_defines.h"
#include "defines.h"
u32 n1,n2;
u8 c1,c2;
int main()
{
	
	initlcd();
	InitKPM();
	strlcd("CAL TEST");
	while(1)
	{
		disp_seg(KeyScan());
		cmdlcd(GOTO_LINE2_POS0);
		strlcd("  ");
		cmdlcd(GOTO_LINE2_POS0);
		n1=KeyScan();
		c1=KeyScan();
		n2=keyscan();
		while(ColScan()==0);
		switch(c1)
		{
			case '/':n1=n1+n2;
					break;
			case 'x':n1=n*n2;
					break;
			case '-':n1=n1-n2;
					break;
			case '+':n1=n1+n2;
					break;
		}
	}
}
s32 ReadNum(void)
{
	static s32 sum=0;
	u8 keyc;
	while(1)
	{
		keyc=KeyScan();
		#ifdef KPM_DEBUG
		cmdlcd(GOTO_LINE1_POS0);
		charlcd(keyc);
		#endif
		if((keyc>='0')&&(keyc<='9'))
		{
			sum=(sum*10)+(keyc-48);
			#ifdef KPM_DEBUG
			cmdlcd(GOTO_LINE2_POS0);
			U32lcd(sum);
			#endif
			while(ColScan()==0);
		}
		else
		{
			#ifdef KPM_DEBUG
			cmdlcd(CLEAR_LCD);
			#endif
			break;
		}
	}
}