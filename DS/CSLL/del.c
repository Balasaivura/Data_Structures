#include"myheader.h"
ST *Del(ST *ptr)
{
	ST *temp=NULL,*prev=NULL;
	int data;
	printf("enter the data to be deleted\n");
	scanf("%d",&data);
	if(ptr==NULL)
		printf("List is empty\n");
	else if(data==ptr->roll)
	{
		if(ptr->link==ptr)//list having only one node
		{
			free(ptr);
			ptr=NULL;
		}
		else
		{
			for(prev=ptr;prev->link!=ptr;prev=prev->link);
			temp=ptr;
			ptr=ptr->link;
			prev->link=ptr;
			free(temp);
		}
	}
	else
	{
		prev=ptr;
		temp=ptr->link;
		while(temp!=ptr&&data!=temp->roll)
		{
			prev=temp;
			temp=temp->link;
		}
		if(temp==ptr)
			printf("%d is not found\n",data);
		else
		{
			prev->link=temp->link;
			free(temp);
		}
	}
	return ptr;
}
