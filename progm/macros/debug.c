#include<stdio.h>
#define DEBUG
int main()
{
#ifdef DEBUG
	printf("DEBUG messages are ON\n");
#endif
	printf("Hello world\n");
#ifdef DEBUG
	printf("DEBUG messages are ON\n");
#endif
	printf("Hello world\n");
#ifdef DEBUG
	printf("DEBUG messages are ON\n");
#endif
	printf("Hello world\n");
#ifdef DEBUG
	printf("DEBUG messages are ON\n");
#endif
	printf("Hello world\n");
	return 0;
}
