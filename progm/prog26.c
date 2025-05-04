#include<stdio.h>
int main()
{
	int a=2,b=4,c=5;
	a+=b*=c-=10;
	printf("%d %d %d\n",a,b,c);
}


/*{
	printf("%d\n",-1&3456);//3456
	printf("%d\n",-1|456);//-1
	printf("%d\n",-1^789);//
	printf("%d\n",0&789);//0
	printf("%d\n",0&234);//0
}


{
	int a=-1,b=0,c=5;
	char ch=a;
	printf("%d\n",(ch>=97)&&(ch<=90));
	printf("%d\n",(a==0)||(b==0)||(c==0));
	printf("%d\n",(a>b)&&(b<c));
}


{
	printf("%d\n",(0x11>11)&&(11>011));
	printf("%d\n",sizeof(-1)>10);
	printf("%d\n",23.0>23);
}


{
	printf("%lu\n",sizeof('\n'));
	printf("%lu\n",sizeof("5"));
	printf("%lu\n",sizeof(5.0));
	printf("%lu\n",sizeof(23.4f));
	printf("%lu\n",sizeof("23.4f"));
}


{
	int z,x=5,y=-10,a=4,b=2;
	z=x++ - --y * --b/a;
	printf("%d\n",z);
}


{
	double f =33.3;
	int x;
	x=(f>33.3)+(f==33.3);
	printf("%d\n",x);
}


{
	int a=10,b;
	b=a>=5?100:200;
	printf("%d\n",b);
}


{
	int a=123,b=456;
	a^=b^=a^=b;
	printf("%d %d\n",a,b);
}


{
	unsigned int x=022,y=0x22,z=022;
	printf("%d %x %o\n",x,x,x);
	printf("%d %x %o\n",y,y,y);
	printf("%d %x %o\n",z,z,z);
	printf("%d\n",x+y+z);
}


{
	int x=10,y=20,z=5,i;
	i=x<y<z;
	printf("%d\n",i);
}

{
	unsigned char a;
	a=0xff +1;
	printf("%u\n",a);
}
*/
