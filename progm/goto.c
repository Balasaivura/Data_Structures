#include<stdio.h>
int main()
{
	char ch;
	int bit;
	puts("Enter a char:");
	ch=getchar();
	bit=31;
	printf("%c\t %d\t",ch,ch);
TESTBIT:printf("%d",(ch>>bit)&1);
	--bit;
	if(bit>=0){
		goto TESTBIT;
	}
	printf("\n");
	return 0;
}

/*{
	char ch;
	int bit;
	puts("Enter a char:");
	ch=getchar();
	bit=31;
TESTBIT:printf("%d",(ch>>bit)&1);
	--bit;
	if(bit>=0){
		goto TESTBIT;
	}
	printf("\n");
	return 0;
}

{
	int data,bit;
	int count=0;
	puts("Enter an integer:");
	scanf("%d",&data);
	bit=31;
TESTBIT:printf("%d",(data>>bit)&1);
	if((data>>bit)&1){
		count++;
	}
	--bit;
	if(bit>=0){
		goto TESTBIT;
	}
	printf("\n");
	printf("%d having %d bits are set\n",data,count);
	return 0;
}

{
	int data,bit;
	puts("Enter an integer: ");
	scanf("%d",&data);
	bit=31;
TESTBIT:printf("%d",(data>>bit)&1);
	--bit;
	if(bit>=0){
		goto TESTBIT;
	}
	printf("\n");
	return 0;
}
*/
