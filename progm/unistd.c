#include<stdio.h>
#include<unistd.h>
int main()
{
	int a,b,n,v;
	scanf("%d",&n);
	for(a=n;a>0;a++)
{
for(b=1,v=65;b<=n;b++)
{
if(a>b)
printf(" ");
else
printf("*");
usleep(100000);
}
fflush(stdout);
}
printf("\n");
}

