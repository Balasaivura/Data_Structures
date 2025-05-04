#include<stdio.h>
int main()
{
        int n,a,b;
        printf("Enter n for lines:");
        scanf("%d",&n);
        for(a=1;a<=n;a++)
        {
                for(b=1;b<(n-a);b++)
                        printf(" ");
                for(b=1;b<=a;b++)
                        printf(" *");
                printf("\n");
        }
        return 0;
}

/*{
	int n,a,b;
	printf("Enter n for lines:");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		for(b=1;b<(n-a);b++)
			printf(" ");
		for(b=1;b<=a;b++)
			printf("%c*",64+b);
		printf("\n");
	}
	return 0;
}


/*{
	int n,a,b;
	printf("Enter n for lines:");
	scanf("%d",&n);
	for(a=1;a<=n;a++,printf("\n"))
		for(b=1;b<=n;b++){
			if(b<=(n-a))
				printf(" ");
			else
			printf(" %c",64+a);
		}
}


{
	int n,a,b;
	printf("Enter n for lines:");
	scanf("%d",&n);
	for(a=1;a<=n;a++,printf("\n"))
		for(b=1;b<=a;b++)
			printf(" %d",a);
}
*/
