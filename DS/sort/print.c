#include"myheader.h"
void print(STUDENT *head)
{
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		while(head)
		{
			printf("%d %s\n",head->roll,head->name);
			head=head->link;
		}
	}
}
