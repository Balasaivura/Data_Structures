#include<stdio.h>
static int s=60;
void main()
{
	//static int s=50;
	int a=50;
	register int y=50;
	fun(100);
	printf("&a=%lu &s=%lu\n",&a,&s);
	//printf("&a=%lu &y=%lu &s=%lu\n",&a,&y,&s);
	++s;
	printf("s=%d\n",s);
	//++s;
}
void fun(int a)
{
	static int y=50;
	printf("%d\n",y);
}


/*{
	register int i;//it gives fast o/p
	//int i;// it gives o/p after some seconds
	for(i=0;i<=2099999999;i++)
	{}
	printf("vector\n");
}

{
	register int x,y;
	printf("%lu %lu\n",&x,&y);//it will gives error becoz register dosn't have any address.
}

static int x=20;
void main()
{
	static int x=50;
	printf("%d\n",x);//(50) here first search with in the block after then globally.
}
*/
