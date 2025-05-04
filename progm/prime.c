#include<stdio.h>
int main()
{
        int num,v;
	//int flag=0;
        scanf("%d",&num);
        for(v=2;v<num;v++)
	{
		if(num%v==0)
		{
	//		flag=1;
			break;
		}
        }
        //if(flag==0)
	if(v==num)//if(v<=data) not prime prime
                printf("%d is prime num",num);
        else
                printf("%d is not prime num",num);
}



/*{
	int num,cnt=0,v;
	scanf("%d",&num);
	for(v=2;v<num;v++)
	{
		if(num%v==0)
			cnt++;
	}
	if(cnt==0)
		printf("%d is prime num",num);
	else
		printf("%d is not prime num",num);
}
*/
