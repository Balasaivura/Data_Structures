#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
#include<string.h>
typedef struct contactDB
{
	char name[20];
	char email[20];
	char contact[20];
}cdb;
int cnt;
#define max 3
void insert(cdb *ptr)
{
	if(cnt==max)
		printf("DB is full\n");
	else
	{
		printf("Enter the name:");
		scanf("%s",ptr[cnt].name);
		printf("Enter the email:");
		scanf("%s",ptr[cnt].email);
		printf("Enter the contact:");
		scanf("%s",ptr[cnt].contact);
		cnt++;
	}
}
void print(cdb *ptr)
{
	for(int i=0;i<cnt;i++)
	{
		printf("%s %s %s\n",ptr[i].name,ptr[i].email,ptr[i].contact);
		//printf("%s %s %s\n",(ptr+i)->name,(ptr+i)->email,(ptr+i)->contact);
	}
}
void delete(cdb *ptr)
{
	char str[20];
	int flag=0;
	int i;
	printf("Enter the string to delete\n");
	scanf("%s",str);
	for(i=0;i<cnt;i++)
	{
		if(strcmp(str,ptr[i].name)==0)
		{
			memmove(ptr+i,ptr+i+1,(cnt-i-1)*sizeof(cdb));
			cnt--;
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("%s is not found\n",str);
}
void search(cdb *ptr)
{
        char str[20];
        int flag=0;
        int i;
        printf("Enter the string to search\n");
        scanf("%s",str);
        for(i=0;i<cnt;i++)
        {
                if(strcmp(str,ptr[i].name)==0)
                {
			printf("found at %d\n",i+1);
                        flag=1;
                        break;
                }
        }
        if(flag==0)
                printf("%s is not found\n",str);
}
void find(cdb *ptr)
{
        char str[20];
        int flag=0;
        int i;
        printf("Enter the string to find\n");
        scanf("%s",str);
        for(i=0;i<cnt;i++)
        {
                if(strcmp(str,ptr[i].name)==0)
                {
                        printf("%s %s %s\n",ptr[i].name,ptr[i].email,ptr[i].contact);
                        flag=1;
                }
        }
        if(flag==0)
                printf("%s is not found\n",str);
}
void sort(cdb *ptr)
{
	int i,j,k;
	cdb s1[1];
	for(i=0;i<cnt;i++)
	{
		for(k=0;k<cnt-1;k++)
		{
			if(strcmp(ptr[k].name,ptr[k+1].name)>0)
			//if(strlen(ptr[k].name)<strlen(ptr[k+1].name))
			{
				memmove(&s1,&ptr[k],sizeof(cdb));
				memmove(&ptr[k],&ptr[k+1],sizeof(cdb));
				memmove(&ptr[k+1],&s1,sizeof(cdb));
			}
		}
	}
}
int main()
{
	cdb db[max];
	char ch;
	while(1)
	{
		printf("i.insert p.print f.find s.search S.sort d.delete e.exit\n");
		printf("Enter the choice:");
		__fpurge(stdin);
		scanf("%c",&ch);
		switch(ch)
		{
			case 'i':insert(db);
				 break;
			case 'p':print(db);
				 break;
			case 'd':delete(db);
				 break;
			case 's':search(db);
				 break;
			case 'f':find(db);
				 break;
			case 'S':sort(db);
				 break;
			case 'e':exit(0);
		}
	}
}

