#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define row 3
#define col 3
void input(int(*)[],int,int);
void print(int(*)[],int,int);
void transpose(int(*)[],int,int);
int main()
{
	int arr[row][col];
	input(arr,row,col);
	print(arr,row,col);
	transpose(arr,row,col);
}
void input(int(*p)[col],int r,int c)
{
	int i,j;
	srand(getpid());
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			p[i][j]=rand()%50+1;
			//scanf("%d",&p[i][j]);
		}
	}
}
void print(int(*p)[col],int r,int c)
{
        int i,j;
	printf("Genrated Matrix\n");
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        printf("%d ",p[i][j]);
                }
		printf("\n");
        }
	printf("\n");
}
void transpose(int(*p)[col],int r,int c)
{
        int i,j;
	printf("Transpose Matrix\n");
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        printf("%d ",p[j][i]);
                }
                printf("\n");
        }
}

