#include<stdio.h>
int main()
{
	char v1 = 'A';
	char v2;
	printf("v1=%c...%d...\n",v1,v1);
	printf("v2=%c...%d...\n",v2,v2);
	v1++;	
	v2=v1+32;
	printf("v1=%c...%d...\n",v1,v1);
	printf("v2=%c...%d...\n",v2,v2);
	return 0;
}
