#include<stdio.h>
int main()
{
        int rows,cols,n,space;
        printf("Enter the n value:\n");
        scanf("%d",&n);
        for(rows=1;rows<=n;rows++,printf("\n"))
        {
              //  for(space=1;space<=rows;space++)
                   //     printf(" ");
                for(cols=1;cols<=rows;cols++)
                        //printf("*");
                     //   printf("* ");
                 //printf("%d ",rows);
                printf("%d ",cols);
                        //printf("%c ",64+rows);
                //      printf("%c ",64+cols);
        }
}


/*
int main()
{
        int rows,cols,n,space;
        printf("Enter the n value:\n");
        scanf("%d",&n);
        for(rows=1;rows<=n;rows++,printf("\n"))
        {
                for(space=1;space<=rows;space++)
                        printf(" ");
                for(cols=1;cols<=n-rows+1;cols++)
			//printf("*");
                        printf("* ");
                //      printf("%d ",rows);
                //      printf("%d ",cols);
                        //printf("%c ",64+rows);
                //      printf("%c ",64+cols);
        }
}


{
	int rows,cols,n,space;
	printf("Enter the n value:\n");
	scanf("%d",&n);
	for(rows=1;rows<=n;rows++,printf("\n"))
	{
		for(space=1;space<=n-rows;space++)
			printf(" ");
		for(cols=1;cols<=rows;cols++)
			printf("* ");
		//	printf("%d ",rows);
		//	printf("%d ",cols);
			//printf("%c ",64+rows);
		//	printf("%c ",64+cols);
	}
}


int main()
{
        int rows,cols,n;
        printf("Enter the n value:\n");
        scanf("%d",&n);
        for(rows=1;rows<=n;rows++,printf("\n"))
        {
                for(cols=1;cols<=rows;cols++)
                        //printf("* ");
                        //printf("%d ",rows);
                        //printf("%d ",cols);
                        //printf("%c ",64+rows);
                        printf("%c ",64+cols);
        }
}
*/
