#include<stdio.h>
#define choice 1
//command for define and assign macro expanssion during compile time
//cc -Dmacroname=value -E filename.c
//for this file : cc -Dchoice=2 -E conditional.c
int main()
{
	int op1,op2,res;
	op1=13;
	op2=5;

#if choice==1
	res=op1+op2;
	printf("%d\n",res);
#elif choice==2
	res=op1-op2;
	printf("%d\n",res);
#elif choice==3
	res=op1*op2;
	printf("%d\n",res);
#elif choice==4
	res=op1/op2;
	printf("%d\n",res);
#elif choice==5
	res=op1%op2;
	printf("%d\n",res);
#else
	printf("Invalid Choice\n");
#endif
	printf("Program completed\n");
}
