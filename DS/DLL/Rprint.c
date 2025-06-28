#include"myheader.h"
void RPrint(EMP *head)
{
	EMP *temp=NULL;
	if(head==NULL)
	{
		printf("List is Empty\n");
	}
	else
	{
		for(temp=head;temp->link;temp=temp->link);
		while(temp)
		{
			printf("%d %s\n",temp->id,temp->name);
			temp=temp->prev;
		}
	}
}
