#include<LPC21xx.h>
#include<stdlib.h>
#include"types.h"
#include"delay.h"
#define opin_4 8
main()
{
	u32 i,randno;
	IODIR0|=15<<opin_4;
	srand(1);
	for(i=0;i<5;i++)
	{
		randno=rand()%16;
		IOPIN0=randno<<opin_4;
		delay_s(1);
	}
	while(1);
}
