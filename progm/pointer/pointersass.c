#include<stdio.h>
void main()
{
	float f=23.4;
	int *ptr=&f;
	int bit;
	for(bit=31;bit>=0;bit--)
	printf("%d",((*ptr>>bit)&1));// binary o/p of float f value
	printf("   %.2f\n",f);
}


/*void main()
{
	int i=10;
	char *ptr=&i;
	if(*ptr==10)
	printf("little endian\n");
	else
	printf("big endian\n");
	//o/p:- little endian.
}


void fun1(int var)
{
	printf("%x\n",var);//17
}
void fun2(int *ptr)
{	printf("%x\n",*ptr);//41BB3333
}
main()
{
	float f=23.4;
	fun1(f);
	fun2(&f);
}


void main()
{
	unsigned int var=0x11223344;
	char *ptr=&var;
	printf("%x\n",*ptr++);//44
	printf("%x\n",++*ptr);//34
	printf("%x\n",*++ptr);//22
	printf("%x\n",--*ptr);//21
	printf("%x\n",*ptr--);//21
	printf("%x\n",var);//11213444
}


int *check(int, int);
int main()
{
	int *c;
	c=check(10,20);
	printf("%d\n",*c);//20
	return 0;
}
int *check(int i,int j)
{
	int *p,*q;
	p=&i; q=&j;
	if(i>=45) return (p);
	else return(q);
}


void fun(int *p,int q)
{
	printf("in fun...%d %d\n",++*p,++q);//11 21
}
main()
{
	int x=10,y=20;
	fun(&x,y);
	printf("in main...%d %d\n",x,y);//11 20
}


void main()
{
	char ch=50;
	char *ptr=&ch;
	printf("%c\n",--*ptr);//1
	printf("%c\n",ch);//1
}


void main()
{
	int var=0x12345678;
	char*ptr=&var;
	printf("%x\n",*ptr);//78
	ptr++;
	printf("%x\n",*ptr);//56
}


void main()
{
	void *ptr;
	short int i1=520,i2=0;
	float f1=23.4,f2=1.0;
	ptr=&i1;
	i2=*(short int*)ptr;
	ptr=&f1;
	f2=*(float*)ptr;
	printf("i2=%hd f2=%f\n",i2,f2);//520 23.400000
}


void main()
{
	int i=50;
	float f=23.5;
	int *ip;
	float *fp;
	ip=&i; fp=&f;
	++(*ip);
	(*fp)++;
	printf("i=%d f=%f\n",i,f);//51 24.500000
}


void main()
{
	char c1='a',c2;
	char *p1=&c1,*p2=&c2;
	*p2=*p1;
	printf("c1=%c c2=%c\n",c1,c2);//a a
}


void main()
{
	char *cp=0;
	double *dp=0;
	printf("%lu %lu\n",cp,dp);//0 0
	++cp;
	++dp;
	printf("%lu %lu\n",cp,dp);//1 8
}


void main()
{
	double var;
	float *cp=&var;
	printf("%lu %lu\n",cp,cp+1);//address address+1
	++cp;
	printf("%lu %lu\n",cp,cp+1);//address address+1
}


void main()
{
	char *p;
	float *q;
	double *r;
	printf("%lu %lu %lu\n",sizeof(p),sizeof(q),sizeof(r));//8 8 8
	printf("%lu %lu %lu\n",sizeof(*p),sizeof(*q),sizeof(*r));//1 4 8
}


int main()
{
	int i1=520,i2=0;
	float f1=23.4,f2=0.0;
	char *ptr;
	ptr=&i1;
	printf("i2=%d f2=%f\n",i2,f2);
	i2=*ptr;
	printf("i2=%d f2=%f\n",i2,f2);
	ptr=&f1;
	printf("i2=%d f2=%f\n",i2,f2);
	++ptr;
	++ptr;
	f2=*ptr;
	printf("i2=%d f2=%f\n",i2,f2);
}*/
