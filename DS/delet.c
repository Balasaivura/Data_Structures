#include"myheader.h"
STUDENT *delet(STUDENT *head)
{
	STUDENT *temp=NULL;
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		temp=head;
		head=head->link;
		free(temp);
	}
	return head;
}
