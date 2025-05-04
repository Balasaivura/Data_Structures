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
union proof
{
	long int addhaar;
	char pan[11];
	char voter[11];
	char passport[9];
	char licence[11];
};	
typedef struct student
{
	struct ID id;
	char name[20];
	float percent;
	struct DOB d;
	union proof pf;
	char str;
	struct address a;
}std;
void *print (std *);
std *insert (std *);
std *address(std *);
int cnt;
char ch;
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
s1:	printf("1.Addhaar 2.Pan 3.VoterId 4.Passport 5.Licence s.skip\n");
	printf("Enter the choice to strore\n");
	__fpurge(stdin);
	ch=getchar();
	p[cnt].str=ch;
	switch(ch)
	{
		case '1':printf("Enter Addhaar No:");
			 scanf("%ld",&p[cnt].pf.addhaar);
			 break;
		case '2':printf("Enter Pan No:");
                         scanf("%s",p[cnt].pf.pan);
                         break;
		case '3':printf("Enter Voter Id:");
                         scanf("%s",p[cnt].pf.voter);
                         break;
		case '4':printf("Enter Passport No:");
                         scanf("%s",p[cnt].pf.passport);
                         break;
		case '5':printf("Enter Licence Id:");
                         scanf("%s",p[cnt].pf.licence);
                         break;
		case 's':printf("Proof Skiped\n");
			 goto s2;
		default:printf("Invalid choice\n");
			goto s1;
	}
s2:	printf("Enter the address:");
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
        	switch(p[i].str)
		{
			case '1':printf("Addhaar No:%ld\n",p[i].pf.addhaar);
				 break;
			case '2':printf("Pan No:%s\n",p[i].pf.pan);
				 break;
			case '3':printf("Voter Id:%s\n",p[i].pf.voter);
				 break;
			case '4':printf("Passport:%s\n",p[i].pf.passport);
				 break;
			case '5':printf("Licence No:%s\n",p[i].pf.licence);
				 break;
		}
			printf("Address: %d %s %s %s %s %d\n",p[i].a.flatNo,p[i].a.street,p[i].a.area,p[i].a.city,p[i].a.state,p[i].a.pincode);
		}	
	}
}
