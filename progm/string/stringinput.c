#include<stdio.h>
int main()
/*{
	int i=0;
	char str[20];
	puts("Enter a string:");
*	do{
		str[i]=getchar();
	}while(str[i++]!='\n');*
	gets(str);
	str[i-1]='\0';
	printf("%s\n",str);
}
*/


{
	char str[10]="abcdef";
	printf("s:%s\n",str);
	//gets(str);
//	scanf("%s",str);
	//scanf("%[^\n]s",str);
	scanf("%[^.]s",str);
	printf("s:%s\n",str);
}

