//acessing though attribute
typedef volatile unsigned int (vu32);
vu32 pinsel0 __attribute__((at(0xe002c000)));
vu32 iopin0 __attribute__((at(0xe0028000)));
vu32 ioset0 __attribute__((at(0xe0028004)));
vu32 iodir0 __attribute__((at(0xe0028008)));
vu32 ioclr0 __attribute__((at(0xe002800c)));
#define IPIN 0//@p0.0
#define OPIN 7//@p0.7
int main()
{
	//p0.0 to p0.15 cfg as gpio pins ,default PINSEL0=0;
	//cfg p0.7 as gpio out pin
	pinsel0=0;
	iodir0|=1<<OPIN;
	while(1)
	{
		if(((iopin0>>IPIN)&1))
			ioset0=1<<OPIN;
		else
			ioclr0=1<<OPIN;
	}
}

