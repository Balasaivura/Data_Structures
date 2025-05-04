#include<stdio.h>
int main()
{
	int a=10,b=0,c=-1;
	int r;
	r=c++&&a++&&b++;
	printf("a=%d b=%d c=%d r=%d\n",a,b,c,r);
}


/*{
	int i=-1,j=-1,k=0,l=2,m;
	m=i++&&j++&&k++||l++;
	printf("i=%d j=%d k=%d l=%d m=%d\n",i,j,k,l,m);
}

{
	int a,b,c,d;
	a=b=c=d=4;
	a*=b+1;
	c+=d*=3;
	printf("%d %d\n",a,c);
}

{
	int v;
	v=5<8&&8>5?!5:0;
	printf("%d\n",v);
}

{
	int v;
	v=5<8&&8>2?!5?15:18:24;
	printf("%d\t",v);
	v=!5;
	printf("%d\t",v);
}


{
	int v;
	v=5<8?1!=2<5==0?10:20:30;
	printf("%d\n",v);
	v=1!=2<5==0;
	printf("%d\n",v);
}


{
	int a=9,b=9;
	a=b++;
	printf("%d\t",a);
	b=a++;
	printf("%d\t",b);
	b=++b;
	printf("%d\t",b);
	printf("%d %d\n",a,b);
}


{
	int x=10,a=15,b=6;
	x+=a<b?(-x):100;
	printf("%d\n",x);
}


{
	int a=33;
	char c=22;
	short int d=66;
	unsigned char f=99;
	int i=a&&(d=67)||(c=24)&&(f=95);
	printf("%d %d\n",i,c);
}

{
	int a=-10,b=50,c,d;
	c=a<<2;
	d=b>>2;
	printf("%d %d\n",c,d);
	return 0;
}
*/
