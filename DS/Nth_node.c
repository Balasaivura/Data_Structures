#include"myheader.h"
void Nth_node(STUDENT *head,int acnt)
{
	int cnt=0,nth,ncnt;
	printf("Enter the Nth postion from last to print\n");
	scanf("%d",&nth);
	ncnt=acnt-nth+1;
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		while(head)
		{
			cnt++;
			if(ncnt==cnt)
				printf("%d %s\n",head->roll,head->name);
			head=head->link;
		}
	}
}
