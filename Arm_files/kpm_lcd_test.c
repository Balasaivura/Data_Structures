#include "types.h"
#include "lcd.h"
#include "lcd_defines.h"
#include "kpm.h"
#include "seg.h"
main()
{
	initlcd();
	InitKPM();
	init_7segs();
	strlcd("KPM TEST");
	while(1)
	{
		disp_seg(KeyScan());
		cmdlcd(GOTO_LINE2_POS0);
		strlcd("  ");
		cmdlcd(GOTO_LINE2_POS0);
		//U32lcd(KeyScan());
		//disp_seg(KeyScan());
		charlcd(KeyScan());
		while(ColScan()==0);
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
