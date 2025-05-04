#include<stdio.h>
#define PRINT(val,forsp) printf("The value is"#val"="#forsp"\n",val)
int main()
{
	int a=30;
	char b='A';
	float c=28.9;
	PRINT(a,%d);
	PRINT(b,%c);
	PRINT(c,%.2f);
	return 0;
}
