#include"lcd.h"
#include"lcd_defines.h"
#include"delay.h"
int main()
{
   	u32 i,j;
	initlcd();
	/*for( i=0;i<16;i++)
	{
	cmdlcd(0x10);
	charlcd('A');
	strlcd(" V24HE2-ARM");
	cmdlcd(GOTO_LINE2_POS0);
	U32lcd(1234567890);
	delay_ms(2000);
	cmdlcd(CLEAR_LCD);
	F32lcd(-123.456789,6);
	delay_ms(500);*/

	while(1)
	{
	for(i=15,j=0;j<=15;i--,j++)
	{
	cmdlcd(0x80+i);
	strlcd("V24HE2-ARM TEXT");
	cmdlcd(0xc0+j);
	strlcd("LCD TEST PROG");
	delay_ms(500);
	cmdlcd(0x01);
	}
	/*for(i=0;i<=15;i++)
	{
	cmdlcd(0xc0+i);
	strlcd("LCD TEST PROG");
	delay_ms(500);
	cmdlcd(0x01);
	}
	for(i=15;i>0;i--)
	{
	cmdlcd(0x80+i);
	strlcd("LCD TEST PROG");
	delay_ms(500);
	cmdlcd(0x01);
	}			  */
	}
}
