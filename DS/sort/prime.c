#include"myheader.h"
void prime(STUDENT *head)
{
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		while(head)
		{
			if(isprime(head->roll))
				printf("%d %s\n",head->roll,head->name);
			head=head->link;
		}
	}
}
int isprime(int n)
{
        int i,s;
        //s=sqrt(n);
        if((n==0)||(n==1))
        {
                return 0;
        }
        else if(n==2)
                return 1;
        for(i=2;i<=n;i++)
        {
                if(i%n==0)
                {
                        return 0;
                }
                return 1;
        }
}
