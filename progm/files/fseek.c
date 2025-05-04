#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
	int pos;
	char str[20];
	fgets(str,20,stdin);
	if(str[strlen(str)-1]=='\n')
		str[strlen(str)-1]='\0';
	FILE *fp;
	fp=fopen(str,"r");
	if(fp==NULL)
	{
		printf("%s file is not found\n",str);
		exit(0);
	}
	char ch,ch2;
i1:	printf("1.ToSet 2.ToMove 3.ToEnd e.exit\n");
	printf("Enter the choice\n");
	__fpurge(stdin);
	scanf("%c",&ch);
	switch(ch)
	{
		case '1':printf("Enter the position\n");
			 scanf("%d",&pos);
			 fseek(fp,pos,0);
			 ch2=fgetc(fp);
			 printf("the cursor has been set at %d\n",pos);
			 printf("and character is %c\n",ch2);
			 goto i1;
		case '2':printf("Enter the position\n");
			 printf("Note:if negative value is given it move backward\n");
			 scanf("%d",&pos);
			 fseek(fp,pos,1);
			 ch2=fgetc(fp);
			 printf("the cursor has been moved to %ld\n",ftell(fp));
			 printf("and character is %c\n",ch2);
			 goto i1;
		case '3':printf("Enter the position\n");
			 printf("Note:if negative value is given it move backward from end\n");
			 scanf("%d",&pos);
			 fseek(fp,pos,2);
			 printf("before fgetc the cursor has been set at end %ld\n",ftell(fp));
			 ch2= fgetc(fp);
			 printf("the cursor has been set at end %ld\n",ftell(fp));
			 printf("and character is %c\n",ch2);
			 goto i1;
		case 'e':exit(0);
		default:printf("Inavlid choice\n");
			goto i1;
	}
}
