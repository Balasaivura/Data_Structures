#include"myheader.h"
int total(STUDENT *head)
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
			head=head->link;
		}
	}
	return cnt;
}
