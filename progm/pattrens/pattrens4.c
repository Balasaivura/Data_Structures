#include<stdio.h>
int main()
/*{
	int a,b,n,A;
	scanf("%d",&n);
	for(a=-n;a<=n;a++,printf("\n"))
	{
		A=(a<0)?-a:a;
		for(b=1;b<=n+1-A;b++)
			printf("*");
	}
	return 0;
}
*/

{
	int a,b,n;
	scanf("%d",&n);
	for(a=1;a<=n;a++,printf("\n"))
		for(b=1;b<=a;b++)
			printf("*");
	for(a=0;a<=n;a++)
		printf("*");
	printf("\n");
	for(a=n;a>0;a--,printf("\n"))
		for(b=1;b<=a;b++)
			printf("*");
}

