#include<stdio.h>
void input(int(*)[],int,int);
void print(int(*)[],int,int);
int main()
{
	int arr[3][2];
	//int arr[3][2]={10,20,30,40,50,60};
	//int arr[3][2]=
	//int arr[3][2]={{10,20},{30,40},{50,60}};
	input(arr,3,2);
	print(arr,3,2);
}
void input(int(*p)[2],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the values:\n");
			scanf("%d",&p[i][j]);
		}
	}
}
void print(int(*p)[2],int r,int c)
{
        int i,j;
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        printf("%d ",p[i][j]);
                }
		printf("\n");
        }
}
