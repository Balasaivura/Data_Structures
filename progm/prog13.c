#include<stdio.h>
int main()
{
	int i=56.7;
	float f= 12;
	printf("i=%d f=%f\n",i,f);
	i=f;
	printf("i=%d f=%f\n",i,f);
	i=i*20;
	f=i;
	printf("i=%d f=%f\n",i,f);
	return 0;
}

/*{
	unsigned short int var =0;
	printf("var=%hu\n",var);
	//--var;
	var=var-2;
	printf("var=%hu\n",var);
}
*/

/*int main()
{
	unsigned int var=0;
	printf("var=%u\n",var);
	var =var-1;
	printf("var=%u\n",var);
}
*/

/*int main()
{
	unsigned long int var =0;
	printf("var=%lu\n",var);
	var = var-1;
	printf("var=%lu\n",var);
}


int main()
{
	unsigned long long int var=0;
	printf("var=%llu\n",var);
	var=var-1;
	printf("var=%llu\n",var);
}
*/
