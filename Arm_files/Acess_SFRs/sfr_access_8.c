//acessing though stucture
#include "sfr.h"
int main()
{
	//p0.0 to p0.15 cfg as gpio pins ,default PINSEL0=0;
	//cfg p0.7 as gpio out pin
	//iodir0->sfrbit.b7=1;

	GPIO[2]=1<<7;
	while(1)
	{
		//read from p0.0 input pin and
		//assign/write/update/reflect to p0.7 output pin
		//iopin0->sfrbit.b7=iopin0->sfrbit.b0;
		if(((GPIO[0]>>0)&1)==0)
			GPIO[3]=1<<7;
		else
			GPIO[1]=1<<7;
	}
}
