#include<stdio.h>
int main()
{
	int x=3,y,z;
	y=x=10;
	z=x<10;
	printf("\n x= %d y=%d z=%d",x,y,z);
	return 0;
}
/*{
	int x=7,y=10,a,b;
	a=x||y;//logical OR
	printf("\n a= %d",a);
	b=x|y;
	printf("\n b= %d",b);
	return 0;
}

{
	int x=5,y=5,z;
	z= x&&y;//true && true (+ve && +ve) then output will be true(1) otherwise it will be false(0)
	printf("\n z= %d",z);// 1
	z= x&y;//bitwise AND operator it returns a new integer where each bit is set to 1 if the corresponding bits in both operands are 1 otherwise 0.
	printf("\n z= %d",z);// 5
	return 0;
}


{
	int i=2,j=3,k,l;
	float a,b;
	k=i/j*j;
	l=j/i*i;//left to right operation will be performed
	a=i/j*j;
	b=j/i*i;
	printf("%d %d %f %f",k,l,a,b);// 0 2 0.000000 2.000000
	return 0;
}


{
	int a;
	a= --2;//It give us an error because of here decrement operator is used on integer the decrement or increment oerators are use only on operands.
	printf("a=%d",a);// lvalue error
}
*/
