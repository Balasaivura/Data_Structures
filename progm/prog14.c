#include<stdio.h>
int main()
{
	int a=20, b=021, c=0x22;
	int d;
	d=a+b+c;
	printf("d= %d %o %x\n",d,d,d);
	return 0;
}
/*
{
	int i=10,j=0;
	int x=10,y=0;
	y=++x;
	j=i++;
	printf("x=%d y=%d\n",x,y);
	printf("i=%d j=%d\n",i,j);
	return 0;
}


{
	float v=34.5;
	printf("v=%f\n",v);
	v=v/2;
	printf("v=%f\n",v);
	return 0;
}

{
	int a=10;
	printf("a=%d\n",a);
	++a;
	printf("a=%d\n",a);
	a++;
	printf("a=%d\n",a);
	--a;
	printf("a=%d\n",a);
	a--;
	printf("a=%d\n",a);
}



{
	float v=1234.5;
	printf("v=%e %f\n",v,v);
	v=v*100;
	printf("v=%e %f\n",v,v);
	v=3.4;
	printf("v=%e %f\n",v,v);
	v=0.000567;
	printf("v=%e %f\n",v,v);
	return 0;
}
*/
