#include<stdio.h>
#include<unistd.h>
int main()
{
	int b=5;
	while(b)
	printf("%d",b);
}


/*{
	int b=5;
	while(b){
	printf("%d",b);
	fflush(stdout);
	sleep(1);}
}
	


{
	int x=5;
	{while(x>0)
	printf("%d",x--);}
}


{
        int a=-3,b=5;
        while(b)
        {
        printf("a=%d b=%d\n",a,b);
        usleep(100000);//0.1sec
        b++;}
        printf("after loop a=%d b=%d\n",a,b);
}

{
	int a=-3,b=5;
	while(b)
	{
	printf("a=%d b=%d\n",a,b);
	sleep(1);
	b++;}
	printf("after loop a=%d b=%d\n",a,b);
}
*/
