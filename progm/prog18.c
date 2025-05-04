#include<stdio.h>
int main()
{
	int a=1,b=0,c=-1,d=-1;
	d=--a||b--||++c;
	printf("%d %d %d %d",d,a,b,c);
}
/*{
	int x=5,y=5,z=5,result;
	result=(x==y)&&(y==z);//T T because all the values are equal
	printf("%d\n",result);//T (F if numbers are not same)
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	result=(a<0)||(b<0)||(c<0);
	printf("%d\n",result);//aleast one of them is -ve for T (for F all 3 are +ve)
	return 0;
}


{
	printf("%lu\n",sizeof(1+1));//sizeof not evaluate expression but it evaluted internaly and result is considered for size
	printf("%lu\n",sizeof( 12));
	printf("%lu\n",sizeof(1.2));//default real data is of double type
}

{
	int x=20;
	float y=20.5;
	float z;
	z=x+(int)y;//20+20
	printf("%f\n",z);//40
	return 0;
}

{
	int i=5,j=2;
	int r1;
	float r2;
	r1=i/j;
	printf("%d\n",r1);//2
	r2=i/j;
	printf("%f\n",r2);//2.000000
	return 0;
}
*/
