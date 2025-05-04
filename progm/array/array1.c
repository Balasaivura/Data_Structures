#include<stdio.h>
int main()
{
	int arr[50];
	int size,i;
	scanf("%d",&size);
	if(size==0||size<0)
		printf("invalid size");
	if(size<=20&&size<=50)
	{
		for(i=0;i<size;i++)
			scanf("%d",&arr[i]);
		//checknonrepeat(arr,size);
	}
	else
		printf("Memory Overflow");
}
