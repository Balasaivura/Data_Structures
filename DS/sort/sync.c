#include"myheader.h"
STUDENT *syncfromfile(STUDENT *head)
{
	STUDENT *newnode=NULL,*temp=NULL,var;
	FILE *fp;
	long size=sizeof(STUDENT)-sizeof(STUDENT*);
	fp=fopen("Stu","r");
	if(fp==NULL)
	{
		return head;
	}
	while(fread(&var,size,1,fp)==1)
	{
		newnode=calloc(1,sizeof(STUDENT));
		if(newnode==NULL)
		{
			printf("new node not created\n");
			return head;
		}

		*newnode=var;
		newnode->link=NULL;
		/** method 2
		  newnode->roll=var.roll;
		  strcpy(newnode->name,var.name);
		 **/		
		if(head==NULL)
		{
			head=newnode;
		}
		else
		{
			for(temp=head;temp->link;temp=temp->link);
			temp->link=newnode;
		}
	}
	fclose(fp);
	return head;
}
