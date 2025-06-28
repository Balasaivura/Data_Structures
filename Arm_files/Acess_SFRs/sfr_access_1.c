typedef volatile unsigned int vu32;
#define PINSEL0 (*((vu32*)0xE002C000))
#define IOPIN0 (*((vu32*)0xE0028000))
#define IOSET0 (*((vu32*)0xE0028004))
#define IODIR0 (*((vu32*)0xE0028008))
#define IOCLR0 (*((vu32*)0xE002800C))
#define IPIN 0//@p0.0
#define OPIN 7//@p0.7
int main()
{
	//p0.0 to p0.15 cfg as gpio pins ,default PINSEL0=0;
	//cfg p0.7 as gpio out pin
	IODIR0|=1<<OPIN;
	while(1)
	{
		if(((IOPIN0>>IPIN)&1))
			IOSET0=1<<OPIN;
		else
			IOCLR0=1<<OPIN;
	}
}
