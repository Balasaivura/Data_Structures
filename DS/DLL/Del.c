#include "myheader.h"
EMP *Del(EMP *head)
{
	EMP *newnode=NULL,*temp=NULL;
	newnode=calloc(1,sizeof(EMP));
	if(head==NULL)
	{
		printf("List is Empty\n");
		return head;
	}
	if(newnode==NULL)
	{
		printf("newnode not created\n");
		return head;
	}
	else
	{
		printf("Enter the id to be deleted\n");
		scanf("%d",&newnode->id);
		if((head->link==NULL)&&(newnode->id!=newnode->id))
		{
			printf("%d is not found\n",newnode->id);
		}
		else
		{
			temp=head;
			while(temp && (temp->id!=newnode->id))
			{
				temp=temp->link;
			}
			temp->prev->link=temp->link;
			temp->link->prev=temp->prev;
			free(temp);
		}
		return head;
	}
}

