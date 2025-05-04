#include<stdio.h>
//int main()
/*{
	int a[]={2,3,4,5,6};
	int i=1;
	//printf("%d",a[i++]+i[a+1]);
	printf("%d",a[i++]+*((a+1)+i));
}


{
	int a[3],i;
	for(i=0;i<3;i++)
		a[i]=i++;//here the 'i' value is incrementing so,stack smashing will occour.
		//a[i]=i;//here data is stored in array.
	for(i=0;i<3;i++)
		printf("%d",a[i]);
}
*/

void fun(int *ptr,int n)
{
	if(n)
	{
		fun(ptr+1,n-1);
		++*ptr;
	}
}
int main()
{
	int arr[]={11,22,33,44,55},i;
	fun(arr,sizeof(arr)/sizeof(*arr));
	for(i=0;i<5;i++)
		printf("%d ",arr[i]);
}
