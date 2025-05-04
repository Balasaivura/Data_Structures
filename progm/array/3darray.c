#include<stdio.h>
void print(float (*) [2][3],int ,int ,int );
void input(float (*) [2][3],int ,int ,int );
void sort(float (*) [2][3],int ,int ,int );
int main()
{
	float a[3][2][3];
	input(a,3,2,3);
	print(a,3,2,3);
	char ch;
	__fpurge(stdin);
	ch=getchar();
	switch(ch)
	{
		case 's':sort(a,3,2,3);
			 print(a,3,2,3);
			 break;
	}
}
void input(float (*p)[2][3],int x,int y,int z)
{
	int i,j,k;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			for(k=0;k<z;k++)
			{
				printf("Enter the element of %d student",i+1);
				scanf("%f",&p[i][j][k]);
			}
		}
	}
}
void print(float (*p)[2][3],int x,int y,int z)
{
	int i,j,k;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			for(k=0;k<z;k++)
			{
				printf("%.2f ",p[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
void sort(float (*p)[2][3],int x,int y,int z)
{
	int i,j,k;
	float temp;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			for(k=0;k<z;k++)
			{
				if(p[i][j][k]>p[i+1][j+1][k+1])
				{
					temp=p[i][j][k];
					p[i][j][k]=p[i+1][j+1][k+1];
					p[i+1][j+1][k+1]=temp;
				}
				//printf("%.2f ",p[j][k]);
			}
		}
		//return p;
	}
}
