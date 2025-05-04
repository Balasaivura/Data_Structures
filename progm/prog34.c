#include<stdio.h>
int main()
{
	signed a=123;
	long b=123;
	float c=123;
	double d=123;
	unsigned e=123;
	char f=3;
	printf("%d %ld %f %f %u %c\n",a,b,c,d,e,f);
}


/*{
	long a=9876543210;
	printf("%ld\n",a);
}


{
	int a,b;
	scanf("%i %i",&a,&b);
	printf("sum=%i\n",a+b);
}

{
	int num,bit,op;
	printf("Enter Number and Bitnum :\n");
	scanf("%d %d",&num,&bit);
	op=num&(1<<bit)?puts("set\n"):puts("clear\n");
	op=num&(1<<bit);
	printf("In %d Number %d bit is %d\n",num,bit,op);
}

{
	char ch;
	int a,b,c;
	puts("Enter a char:");
	ch=getchar();
	a=(ch>47)&&(ch<58)?puts("Numeric char\n"):0;
	b=(ch>64)&&(ch<91)?puts("Uppercase Alphabet\n"):0;
	c=(ch>96)&&(ch<123)?puts("Lowercase Alphabet\n"):0;
//	(ch<48)||(ch>57)&&(ch<65)||(ch>90)&&(ch<97)||(ch>122)&&(ch<128)?puts("Special Character\n"):0;
	!(a||b||c)?puts("Special Character\n"):0;
}


{
	int a,b,res;
	printf("Enter the value and shift number:");
	scanf("%d %d",&a,&b);
	res=a>>b;
	printf("%d right shift(>>) %d : %d\n",a,b,res);
	res=a<<b;
	printf("%d left shift(<<) %d : %d\n",a,b,res);
	return 0;
}
*/
