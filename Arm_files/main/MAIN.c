#include <lpc21xx.h>
#include "delay.h"
#include "lcd.h"
#include "defines.h"
#include "kpm.h"
#include "rtc.h"
#include "eint.h"
#include "dht11.h"
#include "esp01.h"
#include "uart.h"
#include "types.h"
#define CFGPIN(WORD,PIN,FUNC) WORD=((PIN<16)?((WORD&~(3<<(PIN*2)))|(FUNC<<(PIN*2))):((WORD&~(3<<((PIN-16)*2)))|(FUNC<<((PIN-16)*2))))
u8 hum_int, hum_deci, temp_int, temp_deci, checksum;  
 s8 temp[7],humi[7];
int j=0,k=0;
/////main start
int main()
{
	int i=0;
InitLCD();
InitUART0();
esp01_connectAP();
Enable_EINT0();
InitKPM();
PREINT=PREINT_VAL;
 PREFRAC=PREFRAC_VAL;
 //AMR=0xFF; //mask all bits ie. no alarm
  rtc_init(); //initialize all seconds,minute and hour values
  CCR=0x01; //timer started
  while(1) //to keep alive so as to monitor the clock
  { 
    StrLCD("HH:MM:SSDD:MM:SS");	
		CmdLCD(0xc0);
	  CharLCD(HOUR/10+'0');
    CharLCD(HOUR%10+'0');
    CharLCD(':');
    CharLCD(MIN/10+'0');
    CharLCD(MIN%10+'0');
    CharLCD(':');
    CharLCD(SEC/10+'0');
    CharLCD(SEC%10+'0');
	  //date month year 
    CharLCD(DOM/10+'0');
    CharLCD(DOM%10+'0');
    CharLCD('/');
    CharLCD(MONTH/10+'0');
    CharLCD(MONTH%10+'0');
    CharLCD('/');
    CharLCD(YEAR/10+'0');
    CharLCD(YEAR%10+'0');
    //CharLCD("\r\n");
		delay_ms(1500);
		CmdLCD(0x01);
   		dht11_request();
		dht11_response();
		hum_int = dht11_data();
		hum_deci = dht11_data();
		temp_int = dht11_data();
		temp_deci = dht11_data();
		checksum = dht11_data();
		//temp data string
		/*j=0;
	  temp[j++]=temp_int;
		temp[j++]='.';
		temp[j++]=temp_deci;
		temp[j]='\0';
		//humidity data string
		k=0;
		humi[k++]=hum_int;
		humi[k++]='.';
		humi[k++]=hum_deci;
		humi[k]='\0';*/
		if( (hum_int + hum_deci + temp_int + temp_deci) != checksum )
			StrLCD("Checksum Error\r\n");
		else
		{	 CmdLCD(0x01);
		      // StrLCD(temp);
			 //CmdLCD(0x80);
			 //StrLCD(humi);
			 //delay_ms(1000);
			CmdLCD(0x80);
			StrLCD("H : ");
			U32LCD(hum_int);
			CharLCD('.');
			U32LCD(hum_deci);
			StrLCD(" % RH ");
			CmdLCD(0xC0);
			StrLCD("T : ");
			U32LCD(temp_int);
			CharLCD('.');
			U32LCD(temp_deci);
			CharLCD(223);
			StrLCD("C");
			CmdLCD(0xD4);
			StrLCD("Checksum : ");
			U32LCD(checksum);
			delay_ms(3000);
			CmdLCD(0x01);
				j=0;
	 /* temp[j++]=temp_int;
		temp[j++]='.';
		temp[j++]=temp_deci;
		temp[j]='\0';
		//humidity data string
		k=0;
		humi[k++]=hum_int;
		humi[k++]='.';
		humi[k++]=hum_deci;
		humi[k]='\0';*/	
  }
		i++;
		if(i>6)
		{
			esp01_sendToThingspeak(temp_int,1);
			delay_ms(5000);
			esp01_sendToThingspeak(hum_int,2);
			i=0;
			
		}
}


}

