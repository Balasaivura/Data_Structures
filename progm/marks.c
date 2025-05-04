#include<stdio.h>
int main()
{
	int total,percent,sub1,sub2,sub3,sub4,sub5;
	printf("enter subject marks:");
	scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
	total = sub1+sub2+sub3+sub4+sub5;
	percent = (total/5);
	printf("total = %d \n percent = %d \n",total,percent);
	return 0;
}

