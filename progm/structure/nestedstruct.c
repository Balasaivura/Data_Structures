#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio_ext.h>
struct DOB
{
	unsigned int day;
	unsigned int month;
	unsigned int year;
}__attribute__((packed));
struct address
{
        int flatNo;
        char street[20];
        char area[20];
        char city[20];
        char state[20];
        int pincode;
}/*__attribute__((packed))*/;
struct ID
{
        char v;
        unsigned short int year;
        char branch;
        char course;
        unsigned short int batch;
        char id[3];
} __attribute__((packed));
typedef struct student
{
	struct ID id;
	char name[20];
	float percent;
	struct DOB d;
	struct address a;
}std;
void *print (std *);
std *insert (std *);
std *address(std *);
int cnt;
int main()
{
	std *db=NULL;
	char ch;
	while(1)
	{
		printf("i.insert p.print e.exit\n");
		printf("Enter the choice\n");
		__fpurge(stdin);
		scanf("%c",&ch);
		switch(ch)
		{
			case 'i':db=insert(db);
				 break;
			case 'p':print(db);
				 break;
			case 'e':exit(0);
		}
	}
}
std *insert (std *p)
{
	std *q,*b;
	p=realloc(p,(cnt+1)*sizeof(std));
	printf("Enter the ID:");
		__fpurge(stdin);
	scanf("%c %hd %c %c %hd %[^\n]s",&p[cnt].id.v,&p[cnt].id.year,&p[cnt].id.branch,&p[cnt].id.course,&p[cnt].id.batch,p[cnt].id.id);
	printf("Enter the name:");
		__fpurge(stdin);
	scanf("%[^\n]s",p[cnt].name);
	printf("Enter the percentage:");
		__fpurge(stdin);
	scanf("%f",&p[cnt].percent);
	printf("Enter the DOB:");
		__fpurge(stdin);
	scanf("%d %d %d",&p[cnt].d.day,&p[cnt].d.month,&p[cnt].d.year);
	printf("Enter the address:");
		__fpurge(stdin);
	b=&p[cnt];
	q=address(b);
	//scanf("%d %s %s %s %s %d",&p[cnt].a.flatNo,p[cnt].a.street,p[cnt].a.area,p[cnt].a.city,p[cnt].a.state,&p[cnt].a.pincode);
	cnt++;
	return p;
}
std *address(std *p)
{
	printf("Enter the Flatno:");
	scanf("%d",&p->a.flatNo);
	printf("Enter the street:");
		__fpurge(stdin);
	scanf("%[^\n]s",p->a.street);
	printf("Enter the Area:");
		__fpurge(stdin);
	scanf("%[^\n]s",p->a.area);
	printf("Enter the City:");
		__fpurge(stdin);
	scanf("%[^\n]s",p->a.city);
	printf("Enter the State:");
		__fpurge(stdin);
	scanf("%[^\n]s",p->a.state);
	printf("Enter the pincode:");
	scanf("%d",&p->a.pincode);
	return p;
}
void *print (std *p)
{
	int i;
	if(cnt==0)
		printf("DB is empty\n");
	else
	{
		for(i=0;i<cnt;i++)
		{
			printf("Student:%d Data\n",i+1);
			printf("ID: %c%d%c%c%d%s\n",p[i].id.v,p[i].id.year,p[i].id.branch,p[i].id.course,p[i].id.batch,p[i].id.id);
        		printf("Name: %s\n",p[i].name);
        		printf("Percent: %.2f\n",p[i].percent);
       			printf("DOB: %d %d %d\n",p[i].d.day,p[i].d.month,p[i].d.year);
        		printf("Address: %d %s %s %s %s %d\n",p[i].a.flatNo,p[i].a.street,p[i].a.area,p[i].a.city,p[i].a.state,p[i].a.pincode);
		}	
	}
}
