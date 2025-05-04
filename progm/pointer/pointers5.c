#include<stdio.h>
void main()
{
	int x=10,y=260;
	char *ptr=&x;
	++ptr; ++ptr;
	printf("%d\n",*ptr);//0
	printf("%d\n",ptr[1]);//0
	printf("%d\n",ptr[2]);//4
}
