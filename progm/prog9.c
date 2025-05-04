#include<stdio.h>
char v1='D';
char v2;
char v3;
int main()
{
	v1++;
	printf("v1=%d...%o...%x...%c\n",v1,v1,v1,v1);
	++v1;
	printf("v1=%d...%o...%x...%c\n",v1,v1,v1,v1);
	v2=v1*2;
	printf("v2=%d...%o...%x...%c\n",v2,v2,v2,v2);
	v3=v2-v1/2;
	printf("v3=%d...%o...%x...%c\n",v3,v3,v3,v3);
	return 0;
}

