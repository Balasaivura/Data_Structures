#include "myheader.h"
EMP *Add_Last(EMP *head)
{
	EMP *newnode=NULL,*temp=NULL;
	/** creation of newnode ***/
	newnode=calloc(1,sizeof(EMP));
	if(newnode==NULL)
	{
		printf("newnode not created\n");
	}
	else
	{
		printf("Enter the EMP ID:\n");
		scanf("%d",&newnode->id);
		printf("Enter the EMP name:\n");
		scanf("%s",newnode->name);
		if(head==NULL)
		{
			head=newnode;
			//newnode->prev=NULL;
			//newnode->link=NULL;
		}
		else
		{
			for(temp=head;temp->link;temp=temp->link);
			temp->link=newnode;
			newnode->prev=temp;
		}
	}
	return head;
}
