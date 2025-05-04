#include<stdio.h>
int main()
{
	int a,n,b,B,A;
	scanf("%d",&n);
	for(a=-n;a<=n;a++,printf("\n"))
	{	A=(a<0)?-a:a;
		for(b=-n;b<=n;b++){
			B=(b<0)?-b:b;
			if(B>=(n-A)) printf("*");
			else printf(" ");
		}
	}
}
