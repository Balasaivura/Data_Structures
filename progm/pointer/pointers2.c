#include<stdio.h>
/*void main()
{
	int x=0x12345678;
	char *ptr=&x;
	printf("%d\n",ptr);
	printf("%x\n",*ptr);
	++ptr;
	printf("%d\n",ptr);
	printf("%x\n",*ptr);
	++ptr;
	printf("%d\n",ptr);
	printf("%x\n",*ptr);
	++ptr;
	printf("%d\n",ptr);
	printf("%x\n",*ptr);
	++ptr;
	printf("%d\n",ptr);
	printf("%x\n",*ptr);
}


void main()
{
	int a=10,b=20,c=30;
	int *iptr=&a;
	char *cptr=&a;
	++cptr,++cptr,++cptr;
	*cptr =40;
	++iptr;
	printf("%d %d %d\n",a,b,c);
}


void main()
{
	int *ptr=100;
	printf("%d\n",*ptr);
	++ptr;
	printf("%lu\n",*ptr);
}



void main()
{
	int x=260;
	void *ptr=&x;
	printf("%d\n",*ptr);//error
	printf("%d\n",*(char*)ptr);//4
	}
*/


void main()
{
	int x;
	void *ptr=&x;
	printf("%d\n",*(char*)ptr);//garbage value
	ptr=0;
	printf("%d\n",*ptr);//error
}

