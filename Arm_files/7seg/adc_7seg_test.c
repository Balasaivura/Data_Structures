#include "adc_defines.h"
#include "adc.h"
#include "seg_defines.h"
#include "seg.h"
f32 eAR;
main()
{
	Init_ADC();
	init_mux7segs();
	while(1)
	{
		eAR=Read_ADC(0);
		disp_mux_segs(eAR);
	}
}
