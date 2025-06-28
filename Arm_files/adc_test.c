#include "adc_defines.h"
#include "adc.h"
f32 eAR[4];
main()
{
	u32 i;
	Init_ADC();
	while(1)
	{
		for(i=0;i<=3;i++)
			eAR[i]=Read_ADC(i);
	}
}
