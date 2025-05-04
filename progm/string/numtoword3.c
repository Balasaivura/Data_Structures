#include<stdio.h>
#include<string.h>
#include<ctype.h>
void numtoword(char ch){
	switch(ch){
		case '0':printf("zero");break;
		case '1':printf("one");break;
		case '2':printf("two");break;
		case '3':printf("three");break;
		case '4':printf("four");break;
		case '5':printf("five");break;
		case '6':printf("six");break;
		case '7':printf("seven");break;
		case '8':printf("eight");break;
		case '9':printf("nine");break;
		default:printf("%c",ch);
}
}
int main()
{
	char s1[100];
	int i;
	fgets(s1,100,stdin);
	for(i=0;s1[i];i++){
		numtoword(s1[i]);
	}
	
}

