#include<stdio.h>
int cntDigits(int var)
{
	int cnt=0;
	do{
	++cnt;
	var/=10;
	}while(var);
return cnt;
}
int main()
{
        int a=1,b=1;
        int min,max,width;
        printf("Enter table range:");
        printf("Enter min:");
        scanf("%d",&min);
        printf("Enter max:");
        scanf("%d",&max);
	width=cntDigits(max)+2;//here the funtion returned value stored in the temporary storage like accumulator etc;
        for(a=min;a<=max;a++,printf("\n"))
                for(b=1;b<=10;b++)
                        printf("%*d",width,a*b);
        return 0;
}
