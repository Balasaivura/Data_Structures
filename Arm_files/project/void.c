void eint0_isr(void)__irq
{
	u8 ch;
	//toggle p0.0 gpio pin as interrupt activity
	//IOPIN0^=1<<EINT0_STATUS_PIN;
	//delay_s(1);
	while(1)
	{
		cmdlcd(0x01);
		cmdlcd(0x80);
		strlcd("1.Edit_Time:");
		cmdlcd(0xc0);
		strlcd("2.Edit_SetPoint:");
		/*cmdlcd(0x94);
		strlcd("Edit Temp:");
		cmdlcd(0xd4);
		strlcd("Edit Humidity:");*/
		cmdlcd(0x80);
		ch=KeyScan();
		while(ColScan()==0);
		switch(ch)
		{
			case '1':Edit_Time();
					break;
			case '2':Edit_SetPoint();
					break;
			case '3':
					break;
		}
		/*ch=KeyScan();
		while(ColScan()==0);
		if(ch =='3')
		{
			cmdlcd(0x01);
			delay_s(2);
			break;
		} */
		break;
	}
	//clear status flag of eint0 in EIP
	EXTINT=1<<0;
	//clear status of eint0 int VIC
	VICVectAddr =0;
	cmdlcd(0x01);
}
