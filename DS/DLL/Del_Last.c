#include "myheader.h"
EMP *Del_Last(EMP *head)
{
	EMP *temp=NULL;
	if(head==NULL)
	{
		printf("List is Empty\n");
		return head;
	}
	if(head->link==NULL)
	{
		free(head);
		head=NULL;
	}
	else
	{
		for(temp=head;temp->link;temp=temp->link);
		temp->prev->link=NULL;
		free(temp);
	}
	return head;
}
