#include <LPC21xx.h>
#include "types.h"
#include "kpm_defines.h"
#include "kpm.h"
#include "delay.h"
#include "defines.h"
u32 kpmLut[4][4]=
{
	/*{1,2,3,},
	{5,6,7,8},
	{9,10,11,12},
	{13,14,15,16}*/
	{'7','8','9','/'},
	{'4','5','6','x'},
	{'1','2','3','-'},
	{'C','0','=','+'}
};
void InitKPM(void)
{
	//cfg row lines as gpio out
	WRITENIBBLE(IODIR1,ROW0,15);
	//default col lines are any input
	//no cfg required
}
u32 ColScan(void)
{
	return ((READNIBBLE(IOPIN1,COL0)<15)?0:1);
}
u32 RowCheck(void)
{
	u32 rNo;
	for(rNo=0;rNo<=3;rNo++)
	{
		//ground one row at a time starting	with 0th row
		WRITENIBBLE(IOPIN1,ROW0,~(1<<rNo));
		if(ColScan()==0)
			break;
	}
	//re-initilize all rows to ground
	WRITENIBBLE(IOPIN1,ROW0,0);
	return rNo;
}
u32 ColCheck(void)
{
	u32 cNo;
	for(cNo=0;cNo<=3;cNo++)
	{
		if(READBIT(IOPIN1,COL0+cNo)==0)
			break;
	}
	return cNo;
}
u32 KeyScan(void)
{
	u32 rNo,cNo,keyV;
	//wait for any keypress
	while(ColScan());
	//if any key pressed
	//identify row in which kew was pressed
	rNo=RowCheck();
	//identify col in which key was pressed
	cNo=ColCheck();
	keyV=kpmLut[rNo][cNo];
	return keyV;
}
