#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
#define row 3
#define col 3
void input(int(*)[]);
void print(int(*)[]);
void mul(int(*)[],int(*)[],int(*)[]);
int main()
{
        int a[row][col],b[row][col],c[row][col];
        input(a);
        print(a);
        sleep(1);
        input(b);
        print(b);
	mul(a,b,c);
	print(c);
}
void mul(int(*a)[col],int(*b)[col],int(*c)[col])
{
	int i,j,k;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			c[i][j]=0;
			for(k=0;k<col;k++)
			c[i][j]+=a[i][k]*b[k][j];
		}
	}
}
void input(int(*p)[col])
{
        int i,j;
        srand(time(NULL));
        //srand(getpid());
        for(i=0;i<row;i++)
        {
                for(j=0;j<col;j++)
                {
                        p[i][j]=rand()%50+1;
                        //scanf("%d",&p[i][j]);
                }
        }
}
void print(int(*p)[col])
{
        int i,j;
        printf("Genrated Matrix\n");
        for(i=0;i<row;i++)
        {
                for(j=0;j<col;j++)
                {
                        printf("%d ",p[i][j]);
                }
                printf("\n");
        }
        printf("\n");
}

