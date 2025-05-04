#include<stdio.h>
int main()
{
        int a,b,n,B;
        scanf("%d",&n);
        for(a=0;a<=n;a++,printf("\n"))
                for(b=-n;b<=n;b++)
                {
                        B=(b<0)?-b:b;
                        if(B<(n-a))
			//if(B>=(n-a))
                                printf(" ");
                        else
                                //printf("*");
                                printf("%c",65+n-B);
                }
}

/*{
	int a,b,n,A;
	scanf("%d",&n);
	for(a=0;a<=n;a++,printf("\n"))
		for(b=-n;b<=n;b++)
		{
			A=(b<0)?-b:b;
			if(A<a)
				printf(" ");
			else
				//printf("*");
				printf("%c",65+A);
		}
}
*/
