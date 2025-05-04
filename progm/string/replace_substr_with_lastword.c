#include<stdio.h>
#include<string.h>
void ReplaceSubstr(char *str,char *substr,char *lastword);
int main()
{
	char str[100],substr[10],lastword[20];
	printf("Enter the string\n");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';
	printf("Enter the substr\n");
	fgets(substr,sizeof(substr),stdin);
	substr[strcspn(substr,"\n")]='\0';
	char *lastspace=strrchr(str,' ');
	if(lastspace!=NULL)
		strcpy(lastword,lastspace+1);
	else
		strcpy(lastword,str);
	ReplaceSubstr(str,substr,lastword);
	printf("Modified string: %s\n",str);
}

void ReplaceSubstr(char *str,char *substr,char *lastword)
{
	char temp[100];
	char *pos=strstr(str,substr);
	if(pos!=NULL)
	{
		int lenBefore=pos-str;
		strncpy(temp,str,lenBefore);
		temp[lenBefore]='\0';
		strcat(temp,lastword);
		strcat(temp,pos+strlen(substr));
		strcpy(str,temp);
	}
}
