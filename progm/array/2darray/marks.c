#include<stdio.h>
#define row 5
#define col 6
void input(int(*)[],int,int);
void print(int(*)[],int,int);
int main()
{
	int arr[row][col];
	input(arr,row,col);
	print(arr,row,col);
}
void input(int(*p)[col],int r,int c)
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
void print(int(*p)[col],int r,int c)
{
        int i,j;
        for(i=0;i<r;i++)
        {
		int sum=0;
                for(j=0;j<c;j++)
                {
			sum+=p[i][j];
                        printf("%d ",p[i][j]);
                }
		printf("%d \n",sum);
        }
}
