#include<stdio.h>
struct student
{
	char name[20];
	float marks;
	int id;
};
int main()
{
	struct student a[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter the name:\n");
		scanf("%s",a[i].name);
		printf("Enter the marks:\n");
		scanf("%f",&a[i].marks);
		printf("Enter the id:\n");
		scanf("%d",&a[i].id);
	}
	for(i=0;i<3;i++)
	{
		printf("%s %.2f %d\n",a[i].name,a[i].marks,a[i].id);
	}
}
