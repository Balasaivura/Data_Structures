#include <string.h>
#include "uart0.h"
#include "delay.h"
#include "lcd.h"
#include "types.h"


extern char buff[300];
extern unsigned char i;

void esp01_connectAP()
{
	cmdlcd(0x01);
	cmdlcd(0x80);
	strlcd("AT");
	delay_ms(1000);
	UART0_Str("AT\r\n");
	i=0;memset(buff,'\0',300);
	while(i<4);
	delay_ms(500);
	buff[i] = '\0';
	cmdlcd(0x01);
	cmdlcd(0x80);
	strlcd(buff);
	delay_ms(2000);
	if(strstr(buff,"OK"))
	{
		cmdlcd(0xC0);
		strlcd("OK");
		delay_ms(1000);		
	}
	else
	{
		cmdlcd(0xC0);
		strlcd("ERROR");
		delay_ms(1000);		
		return;
	}
	
	
	cmdlcd(0x01);
	cmdlcd(0x80);
	strlcd("ATE0");
	delay_ms(1000);
	UART0_Str("ATE0\r\n");
	i=0;memset(buff,'\0',300);
	while(i<4);
	delay_ms(500);
	buff[i] = '\0';
	cmdlcd(0x01);
	cmdlcd(0x80);
	strlcd(buff);
	delay_ms(2000);
	if(strstr(buff,"OK"))
	{
		cmdlcd(0xC0);
		strlcd("OK");
		delay_ms(1000);		
	}
	else
	{
		cmdlcd(0xC0);
		strlcd("ERROR");
		delay_ms(1000);		
		return;
	}
	
	
	cmdlcd(0x01);
	cmdlcd(0x80);
	strlcd("AT+CIPMUX");
	delay_ms(1000);
	UART0_Str("AT+CIPMUX=0\r\n");
	i=0;memset(buff,'\0',300);
	while(i<4);
	delay_ms(500);
	buff[i] = '\0';
	cmdlcd(0x01);
	cmdlcd(0x80);
	strlcd(buff);
	delay_ms(2000);
	if(strstr(buff,"OK"))
	{
		cmdlcd(0xC0);
		strlcd("OK");
		delay_ms(1000);		
	}
	else
	{
		cmdlcd(0xC0);
		strlcd("ERROR");
		delay_ms(1000);		
		return;
	}
	
	cmdlcd(0x01);
	cmdlcd(0x80);
	strlcd("AT+CWQAP");
	delay_ms(1000);
	UART0_Str("AT+CWQAP\r\n");
	i=0;memset(buff,'\0',300);
	while(i<4);
	delay_ms(1500);
	buff[i] = '\0';
	cmdlcd(0x01);
	cmdlcd(0x80);
	strlcd(buff);
	delay_ms(2000);
	if(strstr(buff,"OK"))
	{
		cmdlcd(0xC0);
		strlcd("OK");
		delay_ms(1000);		
	}
	else
	{
		cmdlcd(0xC0);
		strlcd("ERROR");
		delay_ms(1000);		
		return;
	}
	
	
	
	cmdlcd(0x01);
	cmdlcd(0x80);
	strlcd("AT+CWJAP");
	delay_ms(1000);
	//need to change the wifi network name and password
	UART0_Str("AT+CWJAP=\"motog\",\"1234567890\"\r\n");
	i=0;memset(buff,'\0',300);
	while(i<4);
	delay_ms(2500);
	buff[i] = '\0';
	cmdlcd(0x01);
	cmdlcd(0x80);
	strlcd(buff);
	delay_ms(2000);
	if(strstr(buff,"WIFI CONNECTED"))
	{
		cmdlcd(0xC0);
		strlcd("OK");
		delay_ms(1000);		
	}
	else
	{
		cmdlcd(0xC0);
		strlcd("ERROR");
		delay_ms(1000);		
		return;
	}
	
}
void esp01_sendToThingspeak(u32 val,u32 id)
{
	cmdlcd(0x01);
	cmdlcd(0x80);
	strlcd("AT+CIPSTART");
	delay_ms(1000);
	UART0_Str("AT+CIPSTART=\"TCP\",\"api.thingspeak.com\",80\r\n");
	i=0;memset(buff,'\0',300);
	while(i<5);
	delay_ms(2500);
	buff[i] = '\0';
	cmdlcd(0x01);
	cmdlcd(0x80);
	strlcd(buff);
	delay_ms(2000);
	if(strstr(buff,"CONNECT") || strstr(buff,"ALREADY CONNECTED"))
	{
		cmdlcd(0xC0);
		strlcd("OK");
		delay_ms(1000);
		
		cmdlcd(0x01);
		cmdlcd(0x80);
		strlcd("AT+CIPSEND");
		delay_ms(1000);
		UART0_Str("AT+CIPSEND=51\r\n");
		i=0;memset(buff,'\0',300);
		//while(buff[i] != '>');
		delay_ms(800);
		//need to change the thingspeak write API key accordind to your channel
		//UART0_Str("GET /update?api_key=A00TT13DXARBBIXF&field2=");
		if(id==1)
		{
			cmdlcd(0x01);
			cmdlcd(0x80);
			strlcd("Sending Temp:");
			delay_ms(2000);
			UART0_Str("GET /update?api_key=A00TT13DXARBBIXF&field1=");
		}
		else if(id==2)
		{
			cmdlcd(0x01);
			cmdlcd(0x80);
			strlcd("Sending Humi:");
			delay_ms(2000);
			UART0_Str("GET /update?api_key=A00TT13DXARBBIXF&field2=");
		}
		else if(id==3)
		{
			cmdlcd(0x01);
			cmdlcd(0x80);
			strlcd("Sending TempSetPoint:");
			delay_ms(2000);
			UART0_Str("GET /update?api_key=A00TT13DXARBBIXF&field3=");
		}
		else if(id==4)
		{
			cmdlcd(0x01);
			cmdlcd(0x80);
			strlcd("Sending HumiSetPoint");
			delay_ms(2000);
			UART0_Str("GET /update?api_key=A00TT13DXARBBIXF&field4=");
		}
		//UART0_Str(val);
		UART0_Int(val);
		UART0_Str("\r\n\r\n");
		delay_ms(5000);
		//delay_ms(5000);
		buff[i] = '\0';
		cmdlcd(0x01);
		cmdlcd(0x80);
		strlcd(buff);
		delay_ms(2000);
		if(strstr(buff,"OK"))
		{
			cmdlcd(0x01);
			strlcd("DATA UPDATED");
			delay_ms(1000);
			//return ;			
		}		
	
		else
		{
			cmdlcd(0x01);
			strlcd("DATA NOT UPDATED");
			delay_ms(1000);	
		}
		
	}
	else
	{
		cmdlcd(0xC0);
		strlcd("ERROR");
		delay_ms(1000);		
		return;
	}
	return;	
}
u32 esp01_RecevieFromThingspeak(void)
{
	u32 sum=0;
	s8 *data = NULL;
	cmdlcd(0x01);
	cmdlcd(0x80);
	strlcd("AT+CIPSTART");
	delay_ms(1000);
	UART0_Str("AT+CIPSTART=\"TCP\",\"api.thingspeak.com\",80\r\n");
	//wait for response
	i=0;memset(buff,'\0',sizeof(buff));
	while(i<5);
	delay_ms(2500);
	buff[i] = '\0';
	cmdlcd(0x01);
	cmdlcd(0x80);
	strlcd(buff);
	delay_ms(2000);
	if(strstr(buff,"CONNECT") || strstr(buff,"ALREADY CONNECTED"))
	{
		cmdlcd(0xC0);
		strlcd("OK");
		delay_ms(1000);
		
		cmdlcd(0x01);
		cmdlcd(0x80);
		strlcd("AT+CIPSEND");
		delay_ms(1000);
		UART0_Str("AT+CIPSEND=74\r\n");
		i=0;memset(buff,'\0',300);
		//while(buff[i] != '>');
		delay_ms(500);
		//need to change the thingspeak write API key accordind to your channel
		//UART0_Str("GET /update?api_key=A00TT13DXARBBIXF&field1=");
		UART0_Str("GET /channels/2829803/fields/1.json?api_key=BQVON5DN6KO9T8TR&results=2\r\n\r\n");
		i=0;
		while(i<4);
		delay_ms(5000);//wait for response
		//read the response

		buff[i] = '\0';
		//find the character for data in "field1":
		data=strrchr(buff,'f');
		if(data)
		{
			data=data+9;
			while(data)
			{
				if((*data>='0' && *data<='9'))
				{
					sum=(sum*10)+(*data-'0');
				}
				else
				{
					break;
				}
				data++;
			}
		cmdlcd(0x01);
		cmdlcd(0x80);
		strlcd("Data Collected");
		cmdlcd(0xc0);
		U32lcd(sum);
		delay_ms(2000);
		}
		else
		{
			cmdlcd(0x01);
			cmdlcd(0x80);
			strlcd("Data NOT found");
			delay_ms(1000);
		}
	}
	else
	{
		cmdlcd(0x01);
		strlcd("ERROR");
		delay_ms(1000);
		//return;
	}
	//Close the connection
	UART0_Str("AT+CIPCLOSE\r\n");
	delay_ms(2000);
	//return the sum read from the response
	return sum;	
} 
