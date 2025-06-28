	#include <string.h>
	#include "uart.h"
	#include "delay.h"
	#include "lcd.h"
	#include "types.h"



	extern signed char buff[200];
	extern unsigned char i;

	void esp01_connectAP()
	{
		CmdLCD(0x01);
		CmdLCD(0x80);
		StrLCD("AT");
		delay_ms(1000);
		UART0_Str("AT\r\n");
		i=0;memset(buff,'\0',200);
		while(i<4);
		delay_ms(500);
		buff[i] = '\0';
		CmdLCD(0x01);
		CmdLCD(0x80);
		StrLCD(buff);
		delay_ms(2000);
		if(strstr((const char *)buff,"OK"))
		{
			CmdLCD(0xC0);
			StrLCD("OK");
			delay_ms(1000);		
		}
		else
		{
			CmdLCD(0xC0);
			StrLCD("ERROR");
			delay_ms(1000);		
			return;
		}
		
		
					CmdLCD(0x01);
				 CmdLCD(0x80);
		StrLCD("ATE0");
		delay_ms(1000);
		UART0_Str("ATE0\r\n");
		i=0;memset(buff,'\0',200);
		while(i<4);
		delay_ms(500);
		buff[i] = '\0';
		CmdLCD(0x01);
		CmdLCD(0x80);
		StrLCD(buff);
		delay_ms(2000);
		if(strstr((const char *)buff,"OK"))
		{
			CmdLCD(0xC0);
			StrLCD("OK");
			delay_ms(1000);		
		}
		else
		{
			CmdLCD(0xC0);
			StrLCD("ERROR");
			delay_ms(1000);		
			return;
		}
		
		
		CmdLCD(0x01);
		CmdLCD(0x80);
		StrLCD("AT+CIPMUX");
		delay_ms(1000);
		UART0_Str("AT+CIPMUX=0\r\n");
		i=0;memset(buff,'\0',200);
		while(i<4);
		delay_ms(500);
		buff[i] = '\0';
		CmdLCD(0x01);
		CmdLCD(0x80);
		StrLCD(buff);
		delay_ms(2000);
		if(strstr((const char *)buff,"OK"))
		{
			CmdLCD(0xC0);
				StrLCD("OK");
			delay_ms(1000);		
		}
		else
		{
			CmdLCD(0xC0);
			StrLCD("ERROR");
			delay_ms(1000);		
			return;
		}
		
		CmdLCD(0x01);
		CmdLCD(0x80);
		StrLCD("AT+CWQAP");
		delay_ms(1000);
		UART0_Str("AT+CWQAP\r\n");
		i=0;memset(buff,'\0',200);
		while(i<4);
		delay_ms(1500);
		buff[i] = '\0';
		CmdLCD(0x01);
		CmdLCD(0x80);
		StrLCD(buff);
		delay_ms(2000);
		if(strstr((const char *)buff,"OK"))
		{
			CmdLCD(0xC0);
			StrLCD("OK");
			delay_ms(1000);		
		}
		else
		{
			CmdLCD(0xC0);
			StrLCD("ERROR");
			delay_ms(1000);		
			return;
		}
		
		
		
		CmdLCD(0x01);
		CmdLCD(0x80);
		StrLCD("AT+CWJAP");
		delay_ms(1000);
		//need to change the wifi network name and password
		UART0_Str("AT+CWJAP=\"Balasai\",\"98765432\"\r\n");
		i=0;memset(buff,'\0',200);
		while(i<4);
		delay_ms(2500);
		buff[i] = '\0';
		CmdLCD(0x01);
		CmdLCD(0x80);
		StrLCD(buff);
		delay_ms(2000);
		if(strstr((const char *)buff,"WIFI CONNECTED"))
		{
			CmdLCD(0xC0);
			StrLCD("OK");
			delay_ms(1000);		
		}
		else
		{
			CmdLCD(0xC0);
				StrLCD("ERROR");
			delay_ms(1000);		
			return;
		}
		
	}

	void esp01_sendToThingspeak(s8 val,int field)
	{
			CmdLCD(0x01);
		CmdLCD(0x80);
		StrLCD("AT+CIPSTART");
		delay_ms(1000);
		UART0_Str("AT+CIPSTART=\"TCP\",\"api.thingspeak.com\",80\r\n");
		i=0;memset(buff,'\0',200);
		while(i<5);
		delay_ms(2500);
		buff[i] = '\0';
		CmdLCD(0x01);
		CmdLCD(0x80);
		StrLCD(buff);
		delay_ms(2000);
		if(strstr((const char *)buff,"CONNECT") || strstr((const char *)buff,"ALREADY CONNECTED"))
		{
			CmdLCD(0xC0);
			StrLCD("OK");
			delay_ms(1000);
			CmdLCD(0x01);
			CmdLCD(0x80);
			StrLCD("AT+CIPSEND");
			delay_ms(1000);
			UART0_Str("AT+CIPSEND=50\r\n");
			i=0;memset(buff,'\0',200);
			//while(buff[i] != '>');
			delay_ms(500);
			//need to change the thingspeak write API key accordind to your channel
			if(field==1)
			{
				UART0_Str("GET /update?api_key=WTZHNPEQYUWRY46G&field1=");
			}
			else if(field==2)
			{
				UART0_Str("GET /update?api_key=WTZHNPEQYUWRY46G&field2=");
			}
				
			UART0_Int(val);
			UART0_Str("\r\n\r\n");
			delay_ms(5000);
			delay_ms(5000);
			buff[i] = '\0';
			CmdLCD(0x01);
			CmdLCD(0x80);
			StrLCD(buff);
			delay_ms(2000);
			if(strstr((const char *)buff,"OK"))
			{
				CmdLCD(0x01);
				StrLCD("DATA UPDATED");
				delay_ms(1000);			
			}
			/*
			else if(!strstr(buff,"CLOSED"))
			{
				Write_CMD_LCD(0x01);
				Write_CMD_LCD(0x80);
				Write_str_LCD("AT+CIPCLOSE");
				delay_ms(1000);
				UART0_Str("AT+CIPCLOSE\r\n");
				i=0;memset(buff,'\0',200);
				while(i<5);
				delay_ms(2500);
				buff[i] = '\0';
				Write_CMD_LCD(0x01);
				Write_CMD_LCD(0x80);
				Write_str_LCD(buff);
				delay_ms(2000);
				if(strstr(buff,"OK"))
				{
					Write_CMD_LCD(0x01);
					Write_CMD_LCD(0x80);
					Write_str_LCD("OK");
					delay_ms(2000);				
				}
				else
				{
					Write_CMD_LCD(0x01);
					Write_CMD_LCD(0x80);
					Write_str_LCD("ERROR");
					delay_ms(2000);		
				}
			
			}*/
			else
			{
				CmdLCD(0x01);
				StrLCD("DATA NOT UPDATED");
				delay_ms(1000);	
			}
			
		}
		else
		{
			CmdLCD(0xC0);
				StrLCD("ERROR");
			delay_ms(1000);		
			return;
		}

		
	}


