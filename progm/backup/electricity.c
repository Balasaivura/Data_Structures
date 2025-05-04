#include<stdio.h>
int main()
{
	int units;
	float total,sur,s1,s2,s3,s4;
	printf("Enter the no. units\n");
	scanf("%d",&units);
	if(units<=50)
	{
		s1=units*0.50;
		total=s1;
	}
	else if(units>50&&units<=150)
	{
		s1=50*0.5;
		units=units-50;
		s2=units*0.75;
		total=s1+s2;
	}
	else if(units>150&&units<=250)
	{
		s1=50*0.5;
		s2=100*0.75;
		units=units-150;
		s3=units*1.20;
		total=s1+s2+s3;
	}
	else
	{
		s1=50*0.5;
		s2=100*0.75;
		s3=100*1.20;
		units=units-250;
		s4=units*1.50;
		total=s1+s2+s3+s4;
	}
	sur=(total/100)*20;
	total=total+sur;
	printf("Total bill:%0.2f\n",total);
}
