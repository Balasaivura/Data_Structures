#include<stdio.h>
int main()
{
	int num;
	char str[20];
	float f;
	FILE *fp;
	printf("Enter the num\n");
	scanf("%d",&num);
	printf("Enter the string\n");
	scanf("%s",str);
	printf("Enter the float\n");
	scanf("%f",&f);
	fp=fopen("data","w");
	fprintf(fp,"%d %s %f\n",num,str,f);
	fclose(fp);
}
