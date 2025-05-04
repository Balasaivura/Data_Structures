#include<stdio.h>
#include<string.h>
void input(char(*)[],int);
void print(char(*)[],int);
int main()
{
	char names[5][20];
	input(names,5);
	print(names,5);
}
void input(char(*names)[20],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%s",&names[i]);
	}
	printf("\n");
}
void print(char(*names)[20],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%s\n",names[i]);
	}
	printf("\n");
}

