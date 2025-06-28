#include"myheader.h"
int main()
{
	STUDENT *head=NULL;
	char ch;
	int cnt;
	head=syncfromfile(head);
	while(1)
	{
		printf("i.insert p.print\n P.prime t.total\n d.delete s.save\n n.nth node\n N.nth node from last e.exit\n");
		printf("Enter the choice\n");
		__fpurge(stdin);
		scanf("%c",&ch);
		switch(ch)
		{
			case 'i':head=insert(head);
				 cnt=total(head);
				 break;
			case 'p':print(head);
				 break;
			case 'd':head=delet(head);
				 cnt=total(head);
				 break;
			case 's':save(head);
				 cnt=total(head);
				 break;
			case 'P':prime(head);
				 break;
			case 't':cnt=total(head);
				 printf("total nodes %d\n",cnt);
				 break;
			case 'n':nth_node(head,cnt);
				 break;
			case 'N':Nth_node(head,cnt);
				 break;
			case 'e':exit(0);
		}
	}
}
