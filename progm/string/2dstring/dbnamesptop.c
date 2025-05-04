#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio_ext.h>
char **insert(char **);
char **delete(char **);
char **search(char **);
char **sort(char **);
char **sort1(char **);
char *getstring();
void print(char **);
int cnt;
int main()
{
	char **db=NULL;
	char ch;
	while(1)
	{
		printf("i.insert p.print d.delete f.find s.sort S.sort e.exit\n");
		printf("Enter the choice\n");
		__fpurge(stdin);
		scanf("%c",&ch);
		switch(ch)
		{
			case 'i':db=insert(db);
				 break;
			case 'p':print(db);
				 break;
			case 'd':db=delete(db);
				 break;
			case 'f':search(db);
				 break;
			case 's':db=sort(db);
				 break;
			case 'S':db=sort1(db);
				 break;
			case 'e':exit(0);
		}
	}
}
char **insert(char **p)
{
	__fpurge(stdin);
	p=realloc(p,(cnt+1)*sizeof(*p));
	p[cnt]=getstring();
	cnt++;
	return p;
}
char *getstring()
{
	char *s=NULL;
	int i=0;
	do
	{
		s=realloc(s,i+1);
		s[i]=getchar();
	}while(s[i++]!='\n');
	s[i-1]='\0';
	return s;
}
void print(char **p)
{
	if(cnt==0)
		printf("db is empty\n");
	else
	{
		for(int i=0;i<cnt;i++)
		{
			printf("%s\n",p[i]);
		}
	}
}
char **delete(char **p)
{
	char s[20];
	printf("Enter the string to be delete\n");
	__fpurge(stdin);
	fgets(s,20,stdin);
	if(s[strlen(s)-1]=='\n')
		s[strlen(s)-1]='\0';
	for(int i=0;i<cnt;i++)
	{
		if(strcmp(s,p[i])==0)
		{
			free(p[i]);
			p[i]=NULL;
			memmove(p+i,p+i+1,(cnt-i-1)*sizeof(*p));
			cnt--;
			p=realloc(p,cnt*sizeof(*p));
			break;
		}
	}
}
char **search(char **p)
{
        char s[20];
        printf("Enter the string to be search\n");
	__fpurge(stdin);
        fgets(s,20,stdin);
        if(s[strlen(s)-1]=='\n')
                s[strlen(s)-1]='\0';
        for(int i=0;i<cnt;i++)
        {
                if(strstr(p[i],s))
                {
			printf("found at %d\n",i+1);
			return 0;
		}
        }
			printf("%s not found\n",s);
}
char **sort(char **p)
{
	int i,j;
	char *temp;
	for(i=1;i<cnt;i++)
	{
		for(j=0;j<cnt-1;j++)
		{
			if(strlen(p[j])>strlen(p[j+1]))
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
	return p;
}
char **sort1(char **p)
{
        int i,j;
        char *temp;
        for(i=1;i<cnt;i++)
        {
                for(j=0;j<cnt-1;j++)
                {
                        if(strcmp(p[j],p[j+1])>0)
                        {
                                temp=p[j];
                                p[j]=p[j+1];
                                p[j+1]=temp;
                        }
                }
        }
        return p;
}
