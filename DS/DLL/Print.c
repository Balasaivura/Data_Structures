#include "myheader.h"
void Display(EMP *head)
{
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		while(head)
		{
			printf("%d %s\n",head->id,head->name);
			head=head->link;
		}
	}
}
