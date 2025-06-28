#include"myheader.h"
ST *Add(ST *ptr)
{
	ST *temp=NULL,*newnode=NULL;
	newnode=calloc(1,sizeof(ST));
	if(newnode==NULL)
	{
		printf("node not created\n");
		return ptr;
	}
	printf("enter the roll\n");
	scanf("%d",&newnode->roll);
	printf("enter the name\n");
	scanf("%s",newnode->name);
	if(ptr==NULL)//list is empty
	{
		ptr=newnode;//add as first node
	}
	else
	{
		temp=ptr;
		while(temp->link!=ptr)//traverse upto last node
		{
			temp=temp->link;
		}
		temp->link=newnode;//linkink newnode to last node
	}
	newnode->link=ptr;//first node address storing in last node link
	return ptr;
}
