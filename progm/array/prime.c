#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int isprime(int);
void main()
{
	int i,n,max,j;
	int arr[20];
	srand(getpid());
	n=sizeof(arr)/sizeof(arr[0]);
	printf("Enter %d integers:\n",n);
	for(i=0;i<n;i++)
	{
		arr[i]=rand()%100+100;//100 to 150
	}

	printf("you supplied:");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);//*(arr+i);
	printf("\n");
	for(max=arr[0],i=1;i<n;i++)
	{
		int flag=1;
		for(j=2;j<arr[i];j++)
		{
			if(arr[i]%j==0){
				flag=0;
				break;}
		}
		if(flag==1)
		//j=isprime(arr[i]);
		printf("prime at: %d\n",i);
	}
/*int isprime(int num)
{
	int v;
	int *ptr=&num;
	for(v=2;v<num;v++)
	{
		if(num%v==0)
			break;
	}
	if(v==num)
		return num;	
}
*/
}
