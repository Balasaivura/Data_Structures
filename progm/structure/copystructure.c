#include<stdio.h>
#include<string.h>
struct employee
{
	int id;
	char name[20];
	char email[20];
	float sal;
};
int main()
{
	struct employee e1={123,"abcd","abcd@gmai.com",25000};
	struct employee e2,e3,e4;
	e2=e1;//using assignment operator
	//member by member//
	e3.id=e1.id;
	strcpy(e3.name,e1.name);
	strcpy(e3.email,e1.email);
	e3.sal=e1.sal;
	//memmove//
	memmove(&e4,&e1,sizeof(struct employee));
	printf("%d %s %s %.2f\n",e1.id,e1.name,e1.email,e1.sal);
	printf("%d %s %s %.2f\n",e2.id,e2.name,e2.email,e2.sal);
	printf("%d %s %s %.2f\n",e3.id,e3.name,e3.email,e3.sal);
	printf("%d %s %s %.2f\n",e4.id,e4.name,e4.email,e4.sal);
}
