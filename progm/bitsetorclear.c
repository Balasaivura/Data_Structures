#include<stdio.h>
#include<ctype.h>
int main()
{
	int bit,data;
	puts("Enter an integer data:");
	scanf("%d",&data);
	puts("Enter bit(0-31):");
INPUT:	scanf("%d",&bit);
	if((bit<0)||(bit>31)){
		printf("error:Inavlid bit input\n");
		goto INPUT;
	}
	if(data&(1<<bit))
		printf("bit is set\n");
	else
		printf("bit is clear\n");
/*	if(bit>=0&&bit<=31){
		if(data&(1<<bit)){
				puts("bit is set\n");
			}
		else{
			puts("bit is clear\n");
			}
		}
	else{
		printf("Error:bit is invalid\n");
		goto INPUT;
		}*/
}
	


/*{	int data,bit,op;
	printf("Enter Number and Bitnum :\n");
	scanf(" %d%d",&data,&bit);
	op=data&(1<<bit)?puts("set\n"):puts("clear\n");
	op=data&(1<<bit);
	printf("In %d Number %d bit is %d\n",data,bit,op);
	printf("bit:%d in %d is %d\n",bit,data,(data>>bit)&1);
}

{
	char ch;
	puts("Enter a char:");
	ch=getchar();
	isdigit(ch)?puts("Numeric char\n"):isupper(ch)?printf("%c is Uppercase its Lowercase is %c\n",ch,tolower(ch)):islower(ch)?printf("%c is Lowercase its Uppercase is %c\n",ch,toupper(ch)):puts("Special char\n");
}
*/
