#include<stdio.h>
int main()
/*{
	int n,a,b;
	printf("Enter n for lines\n");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		for(b=1;b<(n-a);b++)
			printf(" ");
		for(b=1;b<=a;b++)
			printf("%c",64+b);
	printf("\n");
	}
	return 0;
}

*/
{
	int a,b,n,v;
	scanf("%d",&n);
	for(a=n;a>=0;a--)
	{
		for(b=0,v=65;b<=n-1;++b)
			(a>b)?printf(" "):printf("%c",v++);
		printf("\n");
	}
}

