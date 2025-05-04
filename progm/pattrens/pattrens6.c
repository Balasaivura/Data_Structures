#include<stdio.h>
int main()
{
int a,b,n,t;
scanf("%d",&n);
for(a=1;a<=n;a++,printf("\n")){
t=a%2;
for(b=1;b<=a;b++)
{
printf("%d",t);
t=!t;
}
}
return 0;
}


/*
{
int a,b,n,T=0;
scanf("%d",&n);
for(a=1;a<=n;a++,printf("\n"))
for(b=1;b<=a;b++)
{
if(a%2!=0)
{printf("%d",a);
T=!T;}
else
printf("*");
}
return 0;

}



/*int testodd(int var)
{
return var%2;
}
int main()
{
        int a,b,n;
        scanf("%d",&n);
        for(a=1;a<=n;a++,printf("\n"))
                for(b=1;b<=a;b++)
                {	printf("%d",(a+b)%2?0:1);
               		//printf("%d",!(a+b)%2?1:0);//
                       // if(!testodd(a+b))
                         //       printf("1");
                       // else
                           //     printf("0");
        }
        return 0;
}


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
*/
