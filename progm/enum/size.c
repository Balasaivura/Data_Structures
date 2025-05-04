#include<stdio.h>
enum week{Sun=1,Mon,Tue,Wed,Thu,Fri,Sat};
int main()
{
	enum week day;
	enum week today=Sat;
	printf("%d\n",today);
	printf("%ld\n",sizeof(day));
}
