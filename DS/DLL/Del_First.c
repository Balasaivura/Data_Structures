#include "myheader.h"
EMP *Del_First(EMP *head)
{
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
		head=head->link;
		free(head->prev);
		head->prev=NULL;
	}
	return head;
}

