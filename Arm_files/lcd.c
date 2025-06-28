#include<LPC21xx.h>
#include"types.h"
#include"defines.h"
#include"lcd_defines.h"
#include"delay.h"
#include"lcd.h"
void LCD_writecustom(u8 loc,u8 *pattern)
{
	u32	i;
	if(loc<8)
	{
		cmdlcd(0x40+(loc*8));
		for(i=0;i<8;i++)
		{
			charlcd(pattern[i]);
		}
	}
}
void writelcd(u8 byte)
{
	//write onto data pins
	WRITEBYTE(IOPIN0,LCD_DATA,byte);
	//enable write operations
	IOCLR0=1<<LCD_RW;
	//give high to low signal
	IOSET0=1<<LCD_EN;
	//dealy>=450ms
	delay_us(1);
	IOCLR0=1<<LCD_EN;
	delay_ms(2);
}
void cmdlcd(u8 cmd)
{
	//select cmd/inst reg
	IOCLR0=1<<LCD_RS;
	//write cmd to cmd/inst reg
	writelcd(cmd);
}
void initlcd(void)
{
	delay_ms(15);
	//cfg LCD data pins p0.8 to p0.15 as gpio out
	WRITEBYTE(IODIR0,LCD_DATA,0xFF);
	//cfg LCD rs,rw,en pins as gpio out
	IODIR0|=1<<LCD_RS|1<<LCD_RW|1<<LCD_EN;

	cmdlcd(0x30);
	delay_ms(4);
	delay_us(100);
	cmdlcd(0x30);
	delay_us(100);
	cmdlcd(0x30);
	cmdlcd(MODE_8BIT_2LINE);
	cmdlcd(DSP_ON_CUR_OFF);
	cmdlcd(CLEAR_LCD);
	cmdlcd(SHIFT_CUR_RIGHT);
}
void charlcd(u8 ascii)
{
	//select data reg
	IOSET0=1<<LCD_RS;
	//write to ddram via data reg
	writelcd(ascii);
}
void strlcd(s8 *str)
{	/*	u32 i;
	for(i=0;str[i];i++)
	{	 cmdlcd(0x14);
		charlcd(str[i]);
		delay_ms(500);
	}  */
	while(*str)
		charlcd(*str++);
}
void U32lcd(u32 num)
{
	u8 digit[10];
	s32 i=0;
	if(num==0)
	{
		charlcd('0');
	}
	else
	{
		while(num>0)
		{
			digit[i++]=(num%10)+'0';
			num/=10;
		}
		for(--i;i>=0;i--)
		{
			charlcd(digit[i]);
		}
	}
}
void s32lcd(s32 num)
{
	if(num<0)
	{
		charlcd('-');
		num=-num;
	}
	U32lcd(num);
}
void F32lcd(f32 fnum,u32 ndp)
{
	u32 num;
	if(fnum<0.0)
	{
		charlcd('-');
		fnum=-fnum;
	}
	num=fnum;
	U32lcd(num);
	charlcd('.');
	while(ndp>0)
	{
		fnum=(fnum-num)*10;
		num=fnum;
		charlcd(num+48);
		ndp--;
	}
}
