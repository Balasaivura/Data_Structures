#include<stdio.h>
typedef struct st
{
	/*char x;
	int y;
	
	char x;
	short int y;

	int x;
	double d;

	char x;
	int y;
	double d;

	char x;
	int y;
	char z;

	char x;
	char y;
	int z;

	int x;
	char str[15];
	float f;*/

	char x;
	int y;
	char z;
	int a;
}st;
int main()
{
	printf("%ld\n",sizeof(st));
}
