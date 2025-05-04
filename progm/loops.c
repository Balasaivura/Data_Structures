#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		if(i==3)
			break;
		printf("app\n");
		if(i==1)
			continue;
		printf("man\n");
		switch(i)
		{
			case 2:printf("abc\n");
			       break;
			case 0:printf("xyz\n");
		}
		if(i==2)
			break;
	}
}


/*{
	int i=10,j;
	for(j=0;j<5;j++)
	{
		if(j==2)
			continue;
		printf("1234\n");
	}
	printf("outside the loop\n");
}

{
	int i=10,j;
	for(j=0;j<3;j++)
	{
		if(j==2)
			break;
		printf("1234\n");
	}
	printf("outside the loop\n");
}


{
	int i=10;
	if(i==10)
		break;
}

// FOR LOOP
{
	int i;
	for(i=5;;)
		printf("hello\n");
}


{
	int i=5,j=4,k=3;
	for(;--i,--j,--k;)
		printf("hello\n");
}

{
	int i;
	for(i=5;i--;i<=10)
		printf("hello\n");
}


{
	int i;
	for(;;)
		printf("hello\n");
}

{
	int a,b,c,d;
	for(a=-3,b=1,c=5;a;a++,d=10,++c)
		printf("hello\n");
	printf("vector\n");
	printf("%d c=%d\n",d,c);
}

{
	int i;
	for(i=0;i<5;i++)
	{
		printf("app\n");
		printf("man\n");
	}
	printf("out of loop\n");
}


//DO WHILE
{
	int x=5;
	do
	{
		printf("vector\n");
	}while(x--);
}


// WHILE
{
	int num,r,sum=0;
	scanf("%d",&num);
	while(num)
	{
		r=num%10;
		num=num/10;
		sum=sum+r;
	}
	printf("sum=%d\n",sum);
}


{
	int a=5,b=6,c=7;
	while(--c,--b,--a)
		printf("app\n");
	printf("man\n");
}

{
	int a=10,b=20,c=5,res;
	res=(++a,++b,c+a+b);
	printf("res=%d\n",res);
}

{
	while()
		printf("abc\n");
		printf("man\n");
}

{
	while(1)
	{
		printf("Hello\n");
		printf("Hello\n");
		printf("Hello\n");
	}
}

{
	int a=5;
       while(a--)
       printf("abc\n");
	printf("2355\n");
}
*/
