#include<LPC21XX.h>
#include<stdlib.h>
#include "types.h"
#define opins_8 8
#define size 20
u32 p[size];
u32 isprime(u32 n);
void delay_s(u32 s);
main()
{	u32 i;
	IODIR0|=255<<opins_8;
	srand(i);
	for(i=0;i<size;i++)
	{
		p[i]=rand()%100+10;
		delay_s(1);
	}
	for(i=0;i<size;i++)
	{
		if(isprime(p[i]))
		{
			IOPIN0=p[i]<<opins_8;
			delay_s(1);
		}
	}
	while(1);
}
u32 isprime(u32 n)
{
	u32 v;
	for(v=2;v<n;v++)
	{
		if(n%v==0)
		{
			break;
		}
	}
	if(n==v)
		return 1;
	else
		return 0;
}
