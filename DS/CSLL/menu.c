#include"myheader.h"
int main()
{
	ST *head=NULL;
	int choice;
	while(1)
	{
		printf("1.Add 2.Print 3.Del 4.exit\n");
		printf("Enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=Add(head);
			       break;
			case 2:Print(head);
			       break;
			case 3:head=Del(head);
			       break;
			case 4:exit(0);
		}
	}
}
