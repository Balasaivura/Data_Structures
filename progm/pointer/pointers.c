#include<stdio.h>
/*void main()
{
	int a=10;
	int *ptr=&a;
	printf("%u\n",&a);
	printf("%u\n",ptr);
	printf("%d\n",a);
	printf("%d\n",*ptr);
}


void main()
{
	int a=260;
	char ch=50;
	int *iptr;
	double *dptr;
	float *fptr;
	char *cptr;
	printf("%lu \n",sizeof(a));
	printf("%lu \n",sizeof(ch));
	printf("%lu \n",sizeof(iptr));
	printf("%lu \n",sizeof(dptr));
	printf("%lu \n",sizeof(cptr));
}


void main()
{
        int a=260;
        char ch=50;
        int *iptr;
        double *dptr;
        float *fptr;
        char *cptr;
	int *p=&a;
	printf("%lu \n",&a);
	printf("%lu \n",*p);
}


void main()
{
	int a=256;
	char *ptr=&a;
	printf("%d\n",*ptr);
}
*/

void main()
{
	int a=200;
	char *ptr=&a;
	printf("%d\n",a);
	printf("%d\n",*ptr);
	++ptr;
	printf("%d\n",a);
	printf("%d\n",*ptr);
	++*ptr;
	//++a;
	printf("%d\n",a);
	printf("%d\n",*ptr);
}
