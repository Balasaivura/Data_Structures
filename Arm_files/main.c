void delay_s(unsigned int dlys)
{
//@cclk=60Mhz
for(dlys*=12000000;dlys>0;dlys--);
}
main()
{
delay_s(1);
while(1);
}
