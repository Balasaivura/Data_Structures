#include"myheader.h"
STUDENT *rev(STUDENT *head)
{
	STUDENT *pptr=NULL,*cptr=NULL,*nptr=NULL;
	if(head==NULL)
	{
		printf("List is Empty\n");
	}
	else if(head->link==NULL)//list having only one node
	{
		printf("List having only one node\n");
	}
	else
	{
		nptr=head;
		while(nptr)
		{
			pptr=cptr;
			cptr=nptr;
			nptr=nptr->link;
			cptr->link=pptr;//backward linking
		}
		head=cptr;
	}
	return head;
}
