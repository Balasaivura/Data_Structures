void delay_us(unsigned int dlyus)
{
//@cclk=60Mhz
for(dlyus*=12;dlyus>0;dlyus--);
}
void delay_ms(unsigned int dlyms)
{
//@cclk=60Mhz
for(dlyms*=12000;dlyms>0;dlyms--);
}
void delay_s(unsigned int dlys)
{
//@cclk=60Mhz
for(dlys*=12000000;dlys>0;dlys--);
}
main()
{
delay_us(1000000);
delay_ms(1000);
delay_s(1);
while(1);
}
