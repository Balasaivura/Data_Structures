#include<stdio.h>
void main()
{
        int a=1,b;
        printf("before loop:a=%d b=%d\n",a,b);
        while(a<=5)
        {
                printf("a=%d\n",a);
		b=1;
                while(b<=5)
                {
                        printf("b=%d\n",b);
                        ++b;
                }
                ++a;
        }
        printf("after loops:a=%d b=%d\n",a,b);
}

/*{
	int a=1,b=1;
	printf("before loop:a=%d b=%d\n",a,b);
	while(a<=5)
	{
		printf("a=%d\n",a);
		while(b<=5)
		{
			printf("b=%d\n",b);
			++b;
		}
		++a;
	}
	printf("after loops:a=%d b=%d\n",a,b);
}


{
	int i,j;
	for(i=0;i<5;i++)
	{
		if(i==0)
			continue;
		printf("vector\n");
		if(i==2)
			break;
		printf("abc\n");
		for(j=0;j<=3;j++)
		{
			if(j==1)
				continue;
			printf("app\n");
			if(j==3)
				break;
			printf("man\n");
		}
		printf("out side of inner for loop 1234\n");
	}
	printf("outside of outer for loop\n");
}
*/
