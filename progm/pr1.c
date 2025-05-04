#include<stdio.h>
#define PI 3.14
int main(){
	int radius,area;
	printf("enter the radius of circle");
	scanf("%d",&radius);
	area = PI*radius*radius;
	printf("radius = %d \n area = %d \n",radius,area);
	return 0;
}


