#include<stdio.h>
int main()
{
	int num,temp,rev=0,digit;
	printf("Enter the integer\n");
	scanf("%d",&num);
	for(temp=num;temp;temp=temp/10){
		rev=rev*10+temp%10;

	}
	printf("%d\n",rev);
	if(rev==num)
		printf("palindrome\n");
	else
		printf("Not a palindrome\n");

}


// Count of digits of a given integer
/*{
	int num,temp,cnt;
	cnt=0;
	printf("Enter the integer\n");
	scanf("%d",&num);
	for(temp=num;temp;temp=temp/10)
	{
		++cnt;
	}
	printf("%d %d",num,temp);
	printf("count=%d\n",cnt);
}


//Sum of digits of a given integer
{
	int num,sum,temp;
	int cnt=0;
	sum=0;
	printf("Enter the integer\n");
	scanf("%d",&num);
	for(temp=num;temp;temp=temp/10)
	{
		sum=sum+temp%10;
		++cnt;
	}
	printf("%d %d",sum,cnt);
}
*/
