#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
#define row 3
#define col 3
void input(int(*)[]);
void input1(int(*)[]);
void print(int(*)[]);
void add(int(*)[],int(*)[],int(*)[]);
void sub(int(*)[],int(*)[],int(*)[]);
void mul(int(*)[],int(*)[],int(*)[]);
void divi(int(*)[],int(*)[],int(*)[]);
int main()
{
	int a[row][col],b[row][col],c[row][col];
	input(a);
	print(a);
	sleep(1);
	input(b);
	print(b);
	char ch;
	printf("a:additio s:subtraction m:multiplication d:division e:exit\n");
	while(1)
	{
		printf("Enter Choice:\n");
		ch=getchar();
		switch(ch)
		{
			case 'a':add(a,b,c);
				 print(c);
				 break;
			case 's':sub(a,b,c);
                                 print(c);
                                 break;
			case 'm':mul(a,b,c);
                                 print(c);
                                 break;
			case 'd':divi(a,b,c);
                                 print(c);
                                 break;
			case 'e':exit(0);
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
/*void input1(int(*p)[col])
{
        int i,j;
        srand(getpid());
        for(i=0;i<row;i++)
        {
                for(j=0;j<col;j++)
                {
                        p[i][j]=rand()%50+1;
                        //scanf("%d",&p[i][j]);
                }
        }
}
*/
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
void add(int(*a)[col],int(*b)[col],int(*c)[col])
{
        int i,j;
        for(i=0;i<row;i++)
        {
                for(j=0;j<col;j++)
                {
			c[i][j]=a[i][j]+b[i][j];
                }
        }
}
void sub(int(*a)[col],int(*b)[col],int(*c)[col])
{
        int i,j;
        for(i=0;i<row;i++)
        {
                for(j=0;j<col;j++)
                {
                        c[i][j]=a[i][j]-b[i][j];
                }
        }
}
void mul(int(*a)[col],int(*b)[col],int(*c)[col])
{
        int i,j;
        for(i=0;i<row;i++)
        {
                for(j=0;j<col;j++)
                {
                        c[i][j]=a[i][j]*b[i][j];
                }
        }
}
void divi(int(*a)[col],int(*b)[col],int(*c)[col])
{
        int i,j;
        for(i=0;i<row;i++)
        {
                for(j=0;j<col;j++)
                {
                        c[i][j]=a[i][j]/b[i][j];
                }
        }
}

