#include<stdio.h>
int main()
{
	short int b=5;
	while(b){
	printf("b=%d\n",b);
	++b;
	}
}


/*{	int a=-3,b=5;
	while(++b);
        printf("outside loop body b=%d\n",b);
}


{
	int a=-3,b=5;	
	 while(a++&&b--)
                printf("inside loop body a=%d b=%d\n",a,b);
        printf("after loop a=%d b=%d \n",a,b);
}


{
	int a=1,b=10,c=100;
	 while(a>b,--a,b--)
                printf("inside loop body a=%d b=%d\n",a,b);
        printf("after loop a=%d b=%d \n",a,b);
}


{
	int a=1,b=10,c=100;
	while(a>b,--a,--b)
		printf("inside loop body a=%d b=%d\n",a,b);
	printf("after loop a=%d b=%d \n",a,b);
}

{
	int a=1,b=10,c=100;
	if(--a<b--,b--,a--)
		printf("in if block...\n");
	printf("after if...a=%d b=%d\n",a,b);
	return 0;
}


{
	int a=1,b=10,c=100;
	if(a--<b--,b--,a--)
		printf("in if block...\n");
	printf("after if...a=%d b=%d\n",a,b);
	return 0;
}


{
	int a=1,b=10,c=100;
	printf("a=%d b=%d c=%d\n",a,b,c);
	c=++a,++b,++a + ++b;
	printf("a=%d b=%d c=%d\n",a,b,c);
	return 0;
}
*/
