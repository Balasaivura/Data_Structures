#include<stdio.h>
int main()
{
	int salary,gross;
	float allowance,houserent;
	printf("Enter the persons salary in number =");
	scanf("%d",&salary);
	allowance=(0.4)*salary;
	houserent=(0.2)*salary;

	gross=salary-(allowance+houserent);
	printf("salary = %d \n allowance = %.2f \n houserent = %.2f \n gross = %d \n",salary,allowance,houserent,gross);
	return 0;
}

