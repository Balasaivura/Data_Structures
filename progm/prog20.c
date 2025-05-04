#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter any 3 numbers :\n");
	scanf("%d %d %d",&a,&b,&c);
	b=(a>b?(a>c?a:c):(b>c?b:c));
	printf("%d\n",b);
}
/*{
	int x=4,y=3,z;
	z=x- -y;//4-*-3 4+3=7
	printf("%d %d %d\n",x,y,z);//4 3 7
}

{
	int x=4,y,z;
	y= -x;
	z= x+;// error
	printf("%d %d\n",y,z);
}

{
	int x=2,y=6,z=6;
	x=y==z;
	printf("%d\n",x);
}

{
	int x,y;
	scanf("%d",&x);
	y=(x<0)? -x:x;//if condition is true left as o/p if it is false right as o/p.
	printf("absolute value of %d is %d \n",x,y);
	return 0;
}

{
	int k=35;
	printf("%d %d %d\n",k==35,k=50,k>40);
	k=- -2;
	printf("%d\n",k);
	return 0;
}
*/
