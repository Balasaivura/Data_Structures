#include<stdio.h>
int main()
{
	int cnt=0,data;
	int temp=data;
	scanf("%d",&data);
	do{
		cnt++;
		temp/=10;
	}while(temp);
		printf("count=%d\n",cnt);
	
}
// Using For loop
/*{
	int data,temp;
	scanf("%d",&data);
	for(temp=data;temp;temp/=10)
	{
		printf("%d",temp%10);
	}
	printf("\ndata= %d temp= %d\n",data,temp);
}

//Using While loop
{
	int data;
	scanf("%d",&data);
	while(data){
		printf("%d",data%10);
		data/=10;
	}
	printf("\ndata= %d\n",data);
}
*/
