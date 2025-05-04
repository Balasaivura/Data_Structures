#include<stdio.h>
int main()
//Here the width is calculated by itself using MAX value
{
        int a=1,b=1;
        int min,max,width;
        printf("Enter table range:");
        printf("Enter min:");
        scanf("%d",&min);
        printf("Enter max:");
        scanf("%d",&max);
	for(a=max,width=0;a;a/=10)
		width++;
	width+=2;
        for(a=min;a<=max;a++,printf("\n"))
                for(b=1;b<=10;b++)
                        printf("%*d",width,a*b);
        return 0;
}
//Here width is given manually by end user
/*{
	int a=1,b=1;
	int min,max,width;
	printf("Enter table range:");
	printf("Enter min:");
	scanf("%d",&min);
	printf("Enter max:");
	scanf("%d",&max);
	printf("enter width:");
	scanf("%d",&width);
	for(a=min;a<=max;a++,printf("\n"))
		for(b=1;b<=10;b++)
			printf("%*d",width,a*b);
	return 0;
}

//Here width is taken as 4 by default
{
	int a=1,b=1;
	int min,max;
	printf("Enter table range:\n");
	printf("Enter MIN:\n");
	scanf("%d",&min);
	printf("Enter MAX:\n");
	scanf("%d",&max);
	for(a=min;a<=max;a++,printf("\n"))
		for(b=1;b<=10;b++)
			printf("%4d",a*b);
	return 0;
}


{
        int a=1,b=1;
        for(a=1;a<=5;a++,printf("\n"))
                for(b=1;b<=10;b++)
                        printf("\t%d",a*b);
        return 0;
}



{
	int a=1,b=1;
	for(a=1;a<=5;a++)
		for(b=1;b<=5;b++)
			printf("a=%d b=%d\n",a,b);
	return 0;
}
*/
