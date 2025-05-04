#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void input(char*,int);
void print(char*,int);
int cntvowels(char*,int);
int main()
{
	char arr[20];
	input (arr, 20);
	print(arr, 20);
	printf("vowel count:%d\n",cntvowels(arr, 20));
	return 0;
}
void print(char *p,int n)
{
	int i;
	printf("the array: ");
	for(i=0;i<n;i++)
		printf("%c ",p[i]);
	printf("\n");
}
void input(char *p,int n)
{
	int i;
	srand(getpid());
	for(i=0;i<n;i++)
		p[i]=rand()%26+65;
	return;
}
int cntvowels(char *p,int n)
{
	int cnt=0;
	while(n--)
	{
		switch(*p++)
		{
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				cnt++;
		}
	}
	return cnt;
}


