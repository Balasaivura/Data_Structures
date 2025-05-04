#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
	printf("sizeof(char) =%u\n",sizeof(char));
	printf("sizeof(short) =%u\n",sizeof(short));
	printf("sizeof(int) =%u\n",sizeof(int));
	printf("sizeof(long) =%u\n",sizeof(long));
        printf("sizeof(float) =%u\n",sizeof(float));
        printf("sizeof(double) =%u\n",sizeof(double));
	printf("sizeof(long double) = %u\n",sizeof(long double));

	printf("SCHAR_MIN = %d\n",SCHAR_MIN);
	printf("SCHAR_MAX = %d\n",SCHAR_MAX);
	printf("UCHAR_MAX = %d\n",UCHAR_MAX);
	printf("SHRT_MIN = %d\n",SHRT_MIN);
	printf("SHRT_MAX = %d\n",SHRT_MAX);
	printf("USHRT_MAX = %u\n",USHRT_MAX);
	printf("INT_MIN = %d\n",INT_MIN);
	printf("INT_MAX = %d\n",INT_MAX);
	printf("UINT_MAX = %u\n",UINT_MAX);
	return 0;
}
