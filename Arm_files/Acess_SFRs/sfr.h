typedef volatile unsigned int (vu32);
typedef unsigned int u32;
enum Bit
{
	LOW,HIGH
};
typedef struct
{
	u32 b0:1;
	u32 b1:1;
	u32 b2:1;
	u32 b3:1;
	u32 b4:1;
	u32 b5:1;
	u32 b6:1;
	u32 b7:1;
	u32 b8:1;
	u32 b9:1;
	u32 b10:1;
	u32 b11:1;
	u32 b12:1;
	u32 b13:1;
	u32 b14:1;
	u32 b15:1;
	u32 b16:1;
	u32 b17:1;
	u32 b18:1;
	u32 b19:1;
	u32 b20:1;
	u32 b21:1;
	u32 b22:1;
	u32 b23:1;
	u32 b24:1;
	u32 b25:1;
	u32 b26:1;
	u32 b27:1;
	u32 b28:1;
	u32 b29:1;
	u32 b30:1;
	u32 b31:1;
}BitField;
typedef union
{
	vu32 sfr;
	BitField sfrbit;
}SFR;
/*SFR pinsel0 __attribute__((at(0xe002c000)));
SFR iopin0 __attribute__((at(0xe0028000)));
SFR ioset0 __attribute__((at(0xe0028004)));
SFR iodir0 __attribute__((at(0xe0028008)));
SFR ioclr0 __attribute__((at(0xe002800c)));*/

/*SFR *pinsel0=(SFR*)0xE0028000;
SFR *iopin0=(SFR*)0xE0028000;
SFR *ioset0=(SFR*)0xE0028004;
SFR *iodir0=(SFR*)0xE0028008;
SFR *ioclr0=(SFR*)0xE002800C;			   */

typedef struct
{
	SFR iopin0,ioset0,iodir0,ioclr0;
}GPIOBLOCK;

//GPIOBLOCK *GPIO=((GPIOBLOCK *)0xE0028000);

//GPIOBLOCK GPIO __attribute__((at(0xE0028000)));

vu32 GPIO[4] __attribute__((at(0xE0028000)));

#define IPIN 0//@p0.0
#define OPIN 7//@p0.7
