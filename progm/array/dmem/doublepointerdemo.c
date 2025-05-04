#include<stdio.h>
int main()
{
	int v=50;
	int *p=&v;
	int **q=&p;
	printf("%d ",v);
	printf("%d ",*p);
	printf("%d ",**q);
}
