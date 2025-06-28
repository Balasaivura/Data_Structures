#include "myheader.h"
int main()
{
	EMP *head=NULL;
	char ch;
	while(1)
	{
		printf("1.Add_First 2.Print 3.exit 4.Add_Last 5.Del_Last 6.Del_First 7.Del 8.Rprint 9.Add_Sort\n");
		__fpurge(stdin);
		ch=getchar();
		switch(ch)
		{
			case '1':head=Add_First(head);
				 break;
			case '2':Display(head);
				 break;
			case '3':exit(0);
			case '4':head=Add_Last(head);
				 break;
			case '5':head=Del_Last(head);
				 break;
			case '6':head=Del_First(head);
				 break;
			case '7':head=Del(head);
				 break;
			case '8':RPrint(head);
				 break;
			case '9':head=Add_Sort(head);
				 break;
		}
	}
}
