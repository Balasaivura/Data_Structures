#include"myheader.h"
int main()
{
	STUDENT *head=NULL;
	char ch;
	int cnt;
	head=syncfromfile(head);
	while(1)
	{
		printf("i.insert p.print P.prime t.total d.delete s.save r.reverse e.exit\n");
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
			case 'd':head=del(head);
				 cnt=total(head);
				 break;
			case 's':save(head);
				 break;
			case 'P':prime(head);
				 break;
			case 't':cnt=total(head);
				 printf("total nodes %d\n",cnt);
				 break;
			case 'r':head=rev(head);
				 break;
			case 'e':exit(0);
		}
	}
}
