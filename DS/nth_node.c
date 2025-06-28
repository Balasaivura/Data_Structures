#include"myheader.h"
void nth_node(STUDENT *head,int acnt)
{
	int cnt=0;
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		while(head)
		{
			cnt++;
			if(acnt==cnt)
				printf("%d %s\n",head->roll,head->name);
			head=head->link;
		}
	}
}
