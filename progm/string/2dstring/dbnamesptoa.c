#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio_ext.h>
#define max 5
void print(char(*)[]);
void *insert(char(*)[]);
int search(char(*)[],char *);
void *delete(char(*)[],char *);
void sort(char(*)[]);
void sort2(char(*)[]);
int cnt;
int main()
{
	char (*names)[20]=NULL;
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
				 names=insert(names);
				 //insert(names);
				 break;
			case 'p':print(names);
				 break;
			case 'f':printf("Enter the name to be search\n");
                                 scanf("%s",s);
                                 temp=search(names,s);
                                 if(temp==0)
                                         printf("%s not found\n",s);
				 else
					 printf("found at %d\n",temp);
				 break;
			case 'd':printf("Enter the name to be deleted\n");
				 scanf("%s",s);
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
void *insert(char(*p)[20])
{
        /*if(cnt==max)
	{
		printf("DB is full\n");
	}
	else
        {
                scanf("%s",p[cnt]);
		cnt++;
        }*/
	p=realloc(p,(cnt+1)*sizeof(*p));
        scanf("%s",p[cnt]);
	cnt++;
	return p;        
}
void print(char(*names)[20])
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
int  search(char(*p)[20],char *s)
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
void *delete(char(*p)[20],char *s)
{
	int i;
	for(i=0;i<cnt;i++)
	{
		if(strcmp(p[i],s)==0)
		{
			memmove(p+i,p+i+1,(cnt-i-1)*sizeof(*p));
			cnt--;
			p=realloc(p,(cnt+1)*sizeof(*p));
			return p+i;
		}
	}
	return NULL;
}
void sort(char(*p)[20])
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
void sort2(char(*p)[20])
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

