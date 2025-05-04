#include<stdio.h>
int main()
//Assignment Qn8
{
        int a,b,n,A,v;
        scanf("%d",&n);
        for(a=-n;a<=n;a++,printf("\n"))
        {
                A=(a<0)?-a:a;
                for(b=0,v=65;b<=n;b++)
                {
                        if(b<A)
                        printf(" ");
                        else{
                //      printf("*");
                //      printf("* ");
                        printf("%c ",v++);
                        usleep(100000);
                        }
                        fflush(stdout);
                        }
        }
}

//Assignment Qn4
{
        int a,b,n,B=0;
        scanf("%d",&n);
        for(a=1;a<=n;a++,printf("\n"))
               for(b=1;b<=a;b++)
		{
			printf("%c ",65+B);
			B++;
		}
	return 0;
}



/*{
int a,b,n;
scanf("%d",&n);
for(a=n;a>0;a--,printf("\n"))
for(b=0;b<a;b++){
printf(" *");
}
return 0;
}



//Assignment Qn3
{
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



//Assignment Qn7
{
	int a,b,n;
        scanf("%d",&n);
        for(a=n+1;a>0;a--,printf("\n"))
                for(b=1;b<=a;b++)
                        printf("*");
        for(a=2;a<=n+1;a++,printf("\n"))
                for(b=1;b<=a;b++)
                        printf("*");
}



//Assignment Qn1
{
        int a,b,n;
        scanf("%d",&n);
        for(a=1;a<=n;a++,printf("\n"))
                for(b=1;b<=a;b++)
                {
                        if((a+b)%2==0)
                                printf("1");
                        else
                                printf("0");
        }
        return 0;
}



//Assignment Qn6
{
int a,b,n;
scanf("%d",&n);
for(a=n;a>0;a--,printf("\n"))
for(b=0;b<a;b++){
if(a%2!=0){
printf("%d",a);
}
else
printf("*");
}
return 0;
}
*/
