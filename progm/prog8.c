#include<stdio.h>
int main()
{
	char var =50;
	printf("var = %c...%d...%o...%x\n",var,var,var,var);
	var = var*2;
	printf("var = %c...%d...%o...%x\n",var,var,var,var);
	var = var-32;
	printf("var = %c...%d...%o...%x\n",var,var,var,var);
	return 0;
}
