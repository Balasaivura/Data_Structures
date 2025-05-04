#include<stdio.h>
int main()
/*{
        int a,b,n,A;
        scanf("%d",&n);
        for(a=-n;a<=n;a++,printf("\n"))
        {
                A=(a<0)?-a:0;
		if(a<0)
		A=-a;
                printf("%d",A);
                for(b=0;b<=-a;b++)
                	printf("%d",b);
        }
        return 0;
}
*/

/*{
	int a,b,n,A;
	scanf("%d",&n);
	for(a=-n;a<=n;a++,printf("\n"))
	{
		A=(a<0)?-a:a;
		printf("%d",A);
		for(b=0;b<=A;b++)
			printf("%d",b);
	}
	return 0;
}


{
        int a,b,n;
        scanf("%d",&n);
	for(a=n;a>0;a--,printf("\n"))
                for(b=1;b<=a;b++)
                        printf("%c",64+a);
        for(a=2;a<=n;a++,printf("\n"))
                for(b=1;b<=a;b++)
                        printf("%c",64+a);
}
*/

{
        int a,b,n;
        scanf("%d",&n);
        for(a=n;a>0;a--,printf("\n"))
                for(b=1;b<=a;b++)
                        printf("*");
        for(a=2;a<=n;a++,printf("\n"))
                for(b=1;b<=a;b++)
                        printf("*");
}

