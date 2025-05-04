#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio_ext.h>
#define max 5
void print(char **);
void insert(char **);
int search(char **,char *);
void *delete(char **,char *);
void sort(char **);
void sort2(char **);
char *getstring(void);
int cnt;
int main()
{
	char *names[5];
	//char names[max][20];
	char s[20],*temp1;
	int temp;
	char ch;
	while(1)
	{
		printf("i.insert p.print f.search d.delete e.exit s.sort S.sort2\n");
		printf("enter choice: ");
		__fpurge(stdin);
		scanf("%c",&ch);
		switch(ch)
		{
			case 'i':printf("Enter the name\n");
				 insert(names);
				 //insert(names);
				 break;
			case 'p':print(names);
				 break;
			case 'f':printf("Enter the name to be search\n");
				 __fpurge(stdin);
				 fgets(s,20,stdin);
                                 if(s[strlen(s)-1]=='\n')
                                         s[strlen(s)-1]='\0';
                                 temp=search(names,s);
                                 if(temp==0)
                                         printf("%s not found\n",s);
				 else
					 printf("found at %d\n",temp);
				 break;
			case 'd':printf("Enter the name to be deleted\n");
				 __fpurge(stdin);
				 fgets(s,20,stdin);
				 if(s[strlen(s)-1]=='\n')
					 s[strlen(s)-1]='\0';
				 temp1=delete(names,s);
				 if(temp1==NULL)
					 printf("%s not found\n",s);
				 break;
			case 'e':exit(0);
			case 's':sort(names);
				 break;
			case 'S':sort2(names);
				 break;
		}
	}
}
void insert(char **p)
{
        if(cnt==max)
	{
		printf("DB is full\n");
	}
	else
        {
		__fpurge(stdin);
		p[cnt]=getstring();
		cnt++;
        }
	/*p=realloc(p,(cnt+1)*sizeof(*p));
        scanf("%s",p[cnt]);
	cnt++;
	return p;*/        
}
void print(char **names)
{
        int i;
	/*if(cnt==0)
	{
		printf("DB is empty\n");
	}
	else
	{
        	for(i=0;i<cnt;i++)
        	{
                	printf("%s\n",names[i]);
        	}
	}*/
	for(i=0;i<cnt;i++)
                {
                        printf("%s\n",names[i]);
                }

}
int  search(char **p,char *s)
{
        int i;
	char *ptr;
        for(i=0;i<cnt;i++)
        {
		ptr=strstr(p[i],s);
		if(ptr!=NULL)
		{
			return i+1;
       			//printf("%d\n",i+1);
		}
		
        }
	return 0;
}
void *delete(char **p,char *s)
{
	int i;
	for(i=0;i<cnt;i++)
	{
		if(strcmp(p[i],s)==0)
		{
			free(p[i]);
			p[i]=NULL;
			memmove(p+i,p+i+1,(cnt-i-1)*sizeof(*p));
			cnt--;
			return p+i;
		}
	}
	return NULL;
}
void sort(char **p)
{
	char temp[20];
	int i,j;
	for(i=0;i<cnt;i++)
	{
		for(j=0;j<cnt-1;j++)
		{
			if(strlen(p[j])>strlen(p[j+1]))
			{
				strcpy(temp,p[j]);
				strcpy(p[j],p[j+1]);
				strcpy(p[j+1],temp);
			}
		}
	}
}
void sort2(char **p)
{
        char temp[20];
        int i,j;
        for(i=0;i<cnt;i++)
        {
                for(j=0;j<cnt-1;j++)
                {
                        if(strcmp(p[j],p[j+1])>0)
                        {
                                strcpy(temp,p[j]);
                                strcpy(p[j],p[j+1]);
                                strcpy(p[j+1],temp);
                        }
                }
        }
}
char *getstring(void)
{
	char *p=NULL;
	int i=0;
	do{
		p=realloc(p,i+1);
		//__fpurge(stdin);
		p[i]=getchar();
	}while(p[i++]!='\n');
	p[i-1]='\0';
	return p;
}
