#include<stdio.h>
#include<unistd.h>
int main()
{
	int a,b,n,A,v;
	scanf("%d",&n);
	for(a=-n;a<=n;a++,printf("\n"))
	{
		A=(a<0)?-a:a;
		for(b=0,v=65;b<=n;b++)
		{
			if(b<A)
			printf(" ");
			else{
		//	printf("*");
		//	printf("* ");
			//printf("%c ",65+b);
			//printf("%c",65+b);
		//	printf("%c",v++);
			printf("%c ",v++);
			usleep(100000);
			}
			fflush(stdout);
			}
	}
}
