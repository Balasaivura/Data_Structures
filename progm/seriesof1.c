#include<stdio.h>
int main()
{
	int data,count,bit;
	int count1=0;
	count=0,bit=31;
	scanf("%d",&data);
	while(bit>=0){
		if((data>>bit)&1){
			count++;
		}
		else{
			count=0;
		}
		if(count>=count1){
		count1=count;
		}
		bit--;
	}
	printf("data %d has %d set bits\n",data,count1);
}


/*{
	int data,count,bit;
	count=0,bit=31;
	scanf("%d",&data);
	printf("Bin:");
	while(bit>=0){
		printf("%d",(data>>bit&1));
		if((data>>bit)&1){
			count++;
		}
		bit--;
	}
	printf("data %d has %d set bits\n",data,count);
}
*/
