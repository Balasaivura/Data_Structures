#include "myheader.h"
EMP *Add_Sort(EMP *head)
{
	EMP *newnode=NULL,*temp=NULL,*prev=NULL;
	//int size=sizeof(EMP);
	/** newnode creation **/
	newnode=calloc(1,sizeof(EMP));
	if(newnode==NULL)
	{
		printf("Newnode not created\n");
	}
	else
	{
		printf("Enter the EMP ID:\n");
		scanf("%d",&newnode->id);
		printf("Enter the EMP Name:\n");
		scanf("%s",newnode->name);
		if((head==NULL)||(newnode->id<head->id))
		{
			newnode->link=head;
			head=newnode;
			head->prev=NULL;
			//head->link->prev=head;
		}
		else
		{
			temp=head;
			while(temp && newnode->id>temp->id)
			{
				prev=temp;
				temp=temp->link;
			}
			prev->link=newnode;
			newnode->link=temp;
			newnode->prev=prev;

		}
	return head;
	}
}
