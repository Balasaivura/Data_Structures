#include"myheader.h"
STUDENT *insert(STUDENT *head)
{
	STUDENT *newnode=NULL,*temp=NULL,*prev=NULL;
	/*** creation of node ***/
	newnode=calloc(1,sizeof(STUDENT));
	if(newnode==NULL)
	{
		printf("Newnode not created\n");
	}
	else
	{
		/*** node created Successfully ***/
		/*** initialise the node ***/
		printf("Enter the rollno\n");
		scanf("%d",&(*newnode).roll);
		printf("Enter the name\n");
		scanf("%s",(*newnode).name);
		//newnode->link=NULL;//must if memory allocated by malloc
		/*** link to list ***/
		/** list is empty **/
		if((head==NULL)||(newnode->roll<head->roll))
		{
			newnode->link=head;
			head=newnode;
		}
		else//list already existing so traverse up to lastnode
		{
			temp=head;
			while(temp && newnode->roll>temp->roll)
			{
				prev=temp;
				temp=temp->link;
			}
			prev->link=newnode;
			newnode->link=temp;//linking newnode to last node
		}
	}
	return head;
}

