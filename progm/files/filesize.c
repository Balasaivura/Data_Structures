#include<stdio.h>
int main()
{
	FILE *fp;
	printf("%ld\n",sizeof(FILE));
	printf("%ld\n",sizeof(fp));
	printf("%ld\n",sizeof(*fp));
}
