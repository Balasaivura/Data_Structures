#include<stdio.h>
int main()
{
	int data,count,bit;
	scanf("%d",&data);
	bit=31,count=0;
	while(bit>=0){
		if(((data>>bit)&1)&&((data>>bit-1)&1)==1){
			count++;
		}
		bit--;
	}
	printf("data %d has %d pair set bits\n",data,count);
}
