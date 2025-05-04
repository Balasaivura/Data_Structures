#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int checkbinary(char *);
void arthematic(char *,char *);
int main()
{
	char str1[20];
	int n1,n2;
input1:	puts("Enter a string1:");
	gets(str1);
	//n1=atoi(str1);
	if(checkbinary(str1)==1)
	{
		printf("Error:only zeros and ones are allowed\n");
		goto input1;
	}
	char str2[20];
input2: puts("Enter a string2:");
        gets(str2);
	//n2=atoi(str2);
        if(checkbinary(str2)==1)
	{
		printf("Error:only zeros and ones are allowed\n");
		goto input2;
	}
	//arthematic(str1,str2);
}
int checkbinary(char *str)
{
	int i,n,flag;
	n=sizeof(str)/sizeof(str[0]);
	for(i=0;i<n;i++)
	{
		flag=1;
		if((str[i]==1||str[i]==0)!=1)
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
		return 1;
	else
		return 0;
}

/*void arthematic(char *str1,char *str2)
{
	int n1,n2,i,a=0,b=0,t1=0,t2=0;
	char choice;
	n1=strlen(str1);
	n2=strlen(str2);
	for(i=0;i<n1;i++)
	{
		t1=str1[i]*(pow(2,i));
		a=a+t1;
	}
	for(i=0;i<n2;i++)
	{
		t2=str2[i]*(pow(2,i));
		b=b+t2;
	}
	printf("Enter choice + - * /:\n");
	scanf("%c",&choice);
	switch(choice)
	{
		case '+':printf("%d\n",a+b);
			 break;
		case '-':printf("%d\n",a-b);
			 break;
		case '*':printf("%d\n",a*b);
			 break;
		case '/':printf("%d\n",a/b);
			 break;
		default:printf("Inavlid case\n");
	}
}
*/
