#include<stdio.h>
#include<unistd.h>
int main()
{
	fork();
	printf("Hi\n");
	fork();
	printf("Hello\n");
	fork();
	printf("Bye\n");
}
