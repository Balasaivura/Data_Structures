#include "myheader.h"
EMP *Add_First(EMP *head)
{
	EMP *newnode=NULL;
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
		newnode->link=head;//forword linking
		if(head)
		{
			head->prev=newnode;//backward linking
		}
		head=newnode;
	}
	return head;
}
