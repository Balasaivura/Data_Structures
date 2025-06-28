#include<LPC21XX.h>
#include "types.h"
#define size 10
u32 fib[size];
void delay_ms(u32 ms);
main()
{
s32 i;
u32 a=0,b=1,c;
for(i=0;i<size;i++)
{
if(i==0)
{
fib[i]=a;
}
else if(i==1)
{
fib[i]=b;
}
else
{
c=a+b;
fib[i]=c;
 a=b;
 b=c;
 }
 delay_ms(500);
 }
 while(1){
 };
 }
