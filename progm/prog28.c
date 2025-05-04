#include<stdio.h>
int main()
{
	unsigned int res;
	res=(64>>(2+1-2))&(~(1<<2));
	printf("%d\n",res);//32
}


/*{
	int a=-8,b=-9;
	printf("%d %d\n",a<<1,a>>1);// -16 -4
	printf("%d %d\n",b<<1,b>>1);//-18 -5
}


{
	int a=-8,b=-9,c=-10;
	printf("%d\n",a<<1);//-32
	printf("%d\n",b<<1);//-18
	printf("%d\n",a<<2);//-64
	printf("%d\n",b<<2);//-36
}


{
	int a=1,b=0,c=-1,d=-1,e=-1;
	b=a<<10;
	c=b<<10;
	d=c<<10;
	e=d<<1;
	printf("%d %d %d %d %d\n",a,b,c,d,e);
}


{
	int a=5,b=0,c=-1;
	b=a<<5;
	c=b<<5;
	printf("%d %d %d\n",a,b,c);//1 160 5120
}


{
	printf("%d\n",1<<4>>4);//1
	printf("%d\n",1<<31>>30);//-2
}

	
{
	printf("%d\n",-3<<4);//240
	printf("%d\n",-1>>2);// -1
	printf("%x\n",1<<10);//400
	printf("%x\n",0xff<<4);//ff0
	printf("%o\n",034<<2);//160
}
*/
