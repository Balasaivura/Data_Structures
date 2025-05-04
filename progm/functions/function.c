#include<stdio.h>
int he2(int,int);
int vector(int,int);
int he2(int a,int b)
{
	printf("in he2 function block\n");
	int res=vector(100,50);
	//printf("res=%d\n",res);
//	return 0;
}
int vector(int x,int y)
{
	return x*y;
	return x+y;// here considered only first return and other returns are negleted
}
void main()
{
	printf("%d\n",he2(20,20));//if we don't use the return in function block it returns the end printf() character count otherwise return value returned.
}



/*
//int vector(int,int);
void main()
{
	printf("in main\n");
	printf("%d",vector());
}
int vector(void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	return a*b;
}
void fun(void)
{
	printf("in function\n");
	int s=10;
}



void main()
{
	printf("in main\n");
	vector();
}
vector()
{
	printf("in vector\n");
}
fun()
{
	printf("in function\n");
}
*/


