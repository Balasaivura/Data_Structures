#include<stdio.h>
#define MUL(n1,n2) ((n1)*(n2))
int main()
{
	printf("res=%d\n",MUL(3,6));
	printf("res=%d\n",MUL(3+3,6+4));
	printf("res=%d\n",60/MUL(3+3,6+4));
	return 0;
}
