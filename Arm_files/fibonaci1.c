#include<LPC21xx.h>
#include"types.h"
#include"delay.h"
#define opins_8 8//p0.8 to p0.15
main()
{
	u32 i,n1,n2,res;
	res=0;
	n1=0;
	n2=1;
	//cfg direction of p0.8 to p0.15
	IODIR0|=255<<opins_8;
	IOPIN0=res<<opins_8;
	delay_s(1);
	res=n1+n2;
	IOPIN0=res<<opins_8;
	for(i=0;i<=4;i++)
	{
		res=n1+n2;
		IOPIN0=res<<opins_8;
		n1=n2;
		n2=res;
		delay_s(1);
	}
	while(1);
}
