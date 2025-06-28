//pin_connect_block_test1.c
#include<LPC21xx.h>
#include "pin_function_defines.h"
#include "pin_connect_block.h"
int main()
{
	//cfg pin function for P0.1 pin
	CfgPortFunc(0,1,GPIO_PIN);
	CfgPortFunc(0,1,RXD0_PIN);
	CfgPortFunc(0,1,PWM0_PIN);
	CfgPortFunc(0,1,EINT0_PIN);

	//cfg pin function for P0.15 pin
	CfgPortFunc(0,15,GPIO_PIN);
	CfgPortFunc(0,15,PIN_FUNC2);
	CfgPortFunc(0,15,PIN_FUNC3);
	CfgPortFunc(0,15,PIN_FUNC4);
   	while(1);
}
