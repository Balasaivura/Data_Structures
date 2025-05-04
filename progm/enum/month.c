#include<stdio.h>
enum week{Jan=1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
int main()
{
	/*enum week day;
	enum week today=Sat;
	printf("%d\n",today);*/
	int mon;
	printf("Enter the month value\n");
	scanf("%d",&mon);
	if(mon==Jan)
		printf("Its a January\n");
	else if(mon==Feb)
		printf("Its a February\n");
	else if(mon==Mar)
		printf("Its a March\n");
	else if(mon==Apr)
		printf("Its a April\n");
	else if(mon==May)
		printf("Its a May\n");
	else if(mon==Jun)
		printf("Its a June\n");
	else if(mon==Jul)
		printf("Its a July\n");
	else if(mon==Aug)
		printf("Its a August\n");
	else if(mon==Sep)
		printf("Its a September\n");
	else if(mon==Oct)
		printf("Its a October\n");
	else if(mon==Nov)
		printf("Its a November\n");
	else if(mon==Dec)
		printf("Its a December\n");
	else 
		printf("Invalid\n");
}
