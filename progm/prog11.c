#include<stdio.h>
#define PI 3.16
int main()
{
	int length,breadth,radius;
	float areaofr,areaofc,perimofr,perimofc;
	printf("Enter the length and breadth of rectangle : ");
	scanf("%d %d",&length,&breadth);
	areaofr = length*breadth;
	perimofr =2*(length+breadth) ;
	printf("areaofr = %.2f ,perimofr = %.2f\n",areaofr,perimofr);
	printf("Enter the radius of circle: \n");
	scanf("%d",&radius);
	areaofc =PI*radius*radius;
	perimofc = 2*PI*radius;
	printf("areaofc : %.2f ,perimofc : %.2f\n",areaofc,perimofc);
	return 0;
}
