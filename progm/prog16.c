#include<stdio.h>
int main()
{
	int i=20.5;
	float f=20.4;
	int result;
	result=i==f;//0
	printf("%d\n",result);
	result=i==(int)f;
	printf("%d\n",result);
	result=(float)i==f;
	printf("%d\n",result);
	result=i<f;
	printf("%d\n",result);
	result=i<(int)f;
	printf("%d\n",result);
	return 0;
}
/*{
	int x=10,y=20,z=30,result=-1;
	result=z>y>x;//30>20(1)>10(0)
	printf("result=%d\n",result);//0
}

{
	int x=10,y=20,z=30;
	printf("%d %d %d\n",x,y,z);
	x=y=z=40;// all the variables are contains 40
	printf("%d %d %d\n",x,y,z);//40 40 40
	return 0;
}


{
	int i1=5,i2=2;
	int i3;
	float f;
	i3 = i1/i2;//stores interger 2
	f= i1/i2;// stores float 2.00 (implicit)
	printf("i3=%d f=%f\n",i3,f);//2 2.00
	i3=i1/(float)i2;// (explicit)
	f=i1/(float)i2;// (explicit)
	printf("i3=%d f=%f\n",i3,f);//2 2.50
	return 0;
}


{
	int n=0;
	char c='c';
	float f=34.5;
	printf("%d\n",n);//0
	printf("%lu\n",sizeof c);//1
	printf("%lu\n",sizeof 'c');//4
	printf("%lu\n",sizeof 34.5);//8 here it will consider as a double
	printf("%lu\n",sizeof (float));//4
	printf("%lu\n",sizeof ("float"));//6
	printf("%lu\n",sizeof ("12.34"));//6
	printf("%lu\n",sizeof ("c"));//2
	return 0;
}
*/
