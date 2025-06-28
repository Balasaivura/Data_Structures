#include"myheader.h"
STUDENT *insert(STUDENT *head)
{
	STUDENT *newnode=NULL,*temp=NULL;
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
		if(head==NULL)
		{
			head=newnode;
		}
		else//list already existing so traverse up to lastnode
		{
			temp=head;
			while(temp->link)
			{
				temp=temp->link;
			}
			temp->link=newnode;//linking newnode to last node
		}
	}
	return head;
}

