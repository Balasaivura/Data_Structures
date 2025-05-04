#include<stdio.h>
int main()
{
	int i,num,r1,r2,temp,rev=0,a,count=0,flag=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	printf("both prime and palindrome are");
	while(num)
	{
		r1=num%100;
		count=0;
		for(i=2;i<=r1;i++)
		{
			if(r1%i==0)
				count++;
		}
		if(count==1)
		{
			temp=a=r1;
			rev=0;
			while(a)
			{
				r2=a%10;
				rev=rev*10+r2;
				a/=10;
			}
			if(temp==rev)
			{
				printf(" %d,",r1);
				flag=1;
			}
		}
		num/=100;
	}
	if(flag==0)
		printf(" not present");
	printf("\n");
}
