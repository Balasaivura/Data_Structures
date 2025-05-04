#include<stdio.h>
enum week{Sun=1,Mon,Tue,Wed,Thu,Fri,Sat};
int main()
{
	/*enum week day;
	enum week today=Sat;
	printf("%d\n",today);*/
	int day;
	printf("Enter the day value\n");
	scanf("%d",&day);
	if(day==Sun)
		printf("Its a Sunday\n");
	else if(day==Mon)
		printf("Its a Monday\n");
	else if(day==Tue)
		printf("Its a Tuesday\n");
	else if(day==Wed)
		printf("Its a Wednesday\n");
	else if(day==Thu)
		printf("Its a Thursday\n");
	else if(day==Fri)
		printf("Its a Friday\n");
	else if(day==Sat)
		printf("Its a Satday\n");
	else 
		printf("Invalid\n");
}
