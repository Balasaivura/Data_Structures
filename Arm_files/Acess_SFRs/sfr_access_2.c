//acessing though pointer variable
typedef volatile unsigned int (vu32);
vu32 *pinsel0=(vu32*)0xe002c000;
vu32 *iopin0=(vu32*)0xe0028000;
vu32 *ioset0=(vu32*)0xe0028004;
vu32 *iodir0=(vu32*)0xe0028008;
vu32 *ioclr0=(vu32*)0xe002800c;
#define IPIN 0//@p0.0
#define OPIN 7//@p0.7
int main()
{
	//p0.0 to p0.15 cfg as gpio pins ,default PINSEL0=0;
	//cfg p0.7 as gpio out pin
	*iodir0|=1<<OPIN;
	while(1)
	{
		if(((*iopin0>>IPIN)&1))
			*ioset0=1<<OPIN;
		else
			*ioclr0=1<<OPIN;
	}
}

