#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdio_ext.h>
int main()
{
	int n;
	char *str;
	printf("Enter length\n");
	scanf("%d",&n);
	str=calloc(1,n+1);
	printf("Enter string\n");
	__fpurge(stdin);
	fgets(str,n+1,stdin);
	printf("you supplied:%s\n",str);
	return 0;
}
