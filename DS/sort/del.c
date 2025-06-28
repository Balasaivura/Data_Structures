#include"myheader.h"
STUDENT *del(STUDENT *head)
{
	STUDENT *temp=NULL,*prev=NULL;
	int data;
	printf("Enter the data to be delete\n");
	scanf("%d",&data);
	if(head==NULL)
	{
		printf("list is empty\n");
	}
	else if(data == head->roll)
	{
		//head=Delfirst(head);
		temp=head;
		head=head->link;
		free(temp);
	}
	else
	{
		temp=head;
		while(temp && data !=temp->roll)
		{
			prev=temp;
			temp=temp->link;
		}
		if(temp==NULL)
		{
			printf("%d is not found\n",data);
		}
		else
		{
			prev->link=temp->link;
			free(temp);
		}
	}
	return head;
}
