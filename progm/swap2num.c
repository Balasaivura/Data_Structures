#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d %d\n",a,b);
}



/*{
	int a,b;
	scanf("%d %d",&a,&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("%d %d\n",a,b);
}


{
	int a,b;
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d %d\n",a,b);
}


{
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("%d %d\n",a,b);
}
*/
