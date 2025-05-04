#include<stdio.h>
int main()
{
	int data,bit,cnt;
	cnt=0;
	printf("Enter the data:");
	scanf("%d",&data);
	printf("the bin:");
	for(bit=31;bit>=0;bit--)
		printf("%d",((data>>bit)&1));
		printf("\n");
		for(bit=31;bit>0;--bit)
			if((data>>bit)&1)
				if((data>>--bit)&1)
					cnt++;	
			printf("Set pair count:%d\n",cnt);
		
	
}
