#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	int x;
	float y;
	char s[20];
	fp=fopen("data","r");
	if(fp==NULL)
	{
		printf("file not found\n");
		exit(0);
	}
	fscanf(fp,"%d %s %f",&x,s,&y);
	printf("%d %s %f\n",x,s,y);
	fclose(fp);
}
