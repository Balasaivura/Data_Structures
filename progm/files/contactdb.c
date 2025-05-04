#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio_ext.h>
typedef struct contactDB
{
	char name[10];
	char email[20];
	char contact[20];
}CDB;
void syncfromfile(CDB *p);
void save(CDB *p);
void insert(CDB *p);
void print(CDB *p);
void delete(CDB *p);
int cnt;
#define max 10
int main()
{
	CDB db[max];
	char ch;
	syncfromfile(db);
	//print(db);
	while(1)
	{
		printf("i.insert p.print d.delete s.save f.find e.exit\n");
		printf("Enter the choice\n");
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
			case 's':save(db);
				 break;
			case 'e':exit(0);
		}
	}
}
void insert(CDB *p)
{
	if(cnt==max)
	{
		printf("DB is full\n");
	}
	else
	{
		printf("Enter the Name\n");
		scanf("%s",p[cnt].name);
		printf("Enter the emailID\n");
		scanf("%s",p[cnt].email);
		printf("Enter the contact No:\n");
		scanf("%s",p[cnt].contact);
		cnt++;
	}
}
void print(CDB *p)
{
	if(cnt==0)
	{
		printf("DB is Empty\n");
	}
	else
	{
		for(int i=0;i<cnt;i++)
		{
			printf("%s %s %s\n",p[i].name,p[i].email,p[i].contact);
			/*printf("%s ",p[i].name);
			printf("%s ",p[i].email);
			printf("%s \n",p[i].contact);*/
		}
	}
}
void delete(CDB *p)
{
	char str[20];
	int flag=0,i;
	printf("Enter the name to be deleted\n");
	scanf("%s",str);
	for(i=0;i<cnt;i++)
	{
		if(strcmp(str,p[i].name)==0)
		{
			memmove(p+i,p+i+1,(cnt-i-1)*sizeof(CDB));
			cnt--;
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("%s name not found\n",str);
	}
}
void save(CDB *p)
{
	FILE *fp;
	if(cnt==0)
	{
		printf("DB is Empty\n");
		return;
	}
	fp=fopen("DB","w");
	for(int i=0;i<cnt;i++)
	{
		fprintf(fp,"%s %s %s\n",p[i].name,p[i].email,p[i].contact);
	}
	fclose(fp);
}
void syncfromfile(CDB *p)
{
	FILE *fp;
	int i=0;
	fp=fopen("DB","r");
	if(fp==NULL)
	{
		return;
	}
	else
	{
		while(fscanf(fp,"%s %s %s",p[cnt].name,p[cnt].email,p[cnt].contact)==3)
		{
			cnt++;
		}
	fclose(fp);
	}
}
