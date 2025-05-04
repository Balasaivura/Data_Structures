#include<stdio.h>
#include<stdlib.h>
#define MAX 5
typedef struct contactDB
{
	char name[20];
	char email[20];
	char contact[20];
}cdb;
cdb *insert(cdb *);
void print(cdb *);
int cnt;
int main()
{
	cdb *db=NULL;
	char ch;
	while(1)
	{
		printf("i.insert p.print d.delete f.find s.sort e.exit\n");
		printf("Enter the choice\n");
		__fpurge(stdin);
		scanf("%s",&ch);
		switch(ch)
		{
			case 'i':db=insert(db);
				 break;
			case 'p':print(db);
				 break;
			case 'e':exit(0);
			/*case 'd':db=delete(db);
				 break;
			case 'f':find(db);
				 break;
			case 's':db=sort(db);
				 break;*/
		}

	}
}
cdb *insert(cdb *p)
{
	if(MAX==cnt){
		printf("db is full");
	}
	else{
	p=realloc(p,(cnt+1)*sizeof(cdb));
	printf("Enter the name:");
	scanf("%s",p[cnt].name);
	printf("Enter the email:");
	scanf("%s",p[cnt].email);
	printf("Enter the contact:");
	scanf("%s",p[cnt].contact);
	cnt++;
	}
	return p;
}
void print(cdb *p)
{
	if(cnt==0)
		printf("DB is empty\n");
	else
	{
		for(int i=0;i<cnt;i++)
		{
			printf("%s %s %s\n",p[i].name,p[i].email,p[i].contact);
		}
	}
}
