#include "adc_defines.h"
#include "adc.h"
#include "seg_defines.h"
#include "seg.h"
#include"lcd_defines.h"
#include"delay.h"
#include"lcd.h"
f32 eAR;
main()
{
	Init_ADC();
	initlcd();
	strlcd("LCD ADC TEST");
	//init_mux7segs();
	//disp_mux_segs(0);
	while(1)
	{
		eAR=Read_ADC(1);
		cmdlcd(GOTO_LINE2_POS0);
		F32lcd(eAR,6);
		delay_ms(550);
		//disp_mux_segs(eAR);
	}
}
