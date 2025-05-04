#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void main()
{
	int i,n,max;
	int arr[10];
	srand(getpid());
	//seeds the random number generator with a unique/new number every time.
	//getpid() returns the job processID ,each time must be unique.
	n=sizeof(arr)/sizeof(arr[0]);
	printf("Enter %d integers:\n",n);
	for(i=0;i<n;i++)
	{
		//printf("Enter integer:%d left:",n-i);
		//scanf("%d",&arr[i]);//arr+i
		//arr[i]=rand()%100;//here every time gives same array of integers to override this problem we used the getpid()
		//arr[i]=rand()%50+100;//100 to 150
		arr[i]=rand()%51+50;//50 t0 100
	}

	printf("you supplied:");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);//*(arr+i);
	printf("\n");
	for(max=arr[0],i=1;i<n;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	printf("the highest =%d\n",max);
}
