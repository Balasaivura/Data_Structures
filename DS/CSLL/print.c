#include"myheader.h"
void Print(ST *ptr)
{
	ST *temp=NULL;
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	temp=ptr;
	do{
		printf("%d %s\n",temp->roll,temp->name);
		temp=temp->link;
	}while(temp!=ptr);
	
}
