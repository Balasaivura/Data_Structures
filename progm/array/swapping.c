#include<stdio.h>
int main()
{
	//int a[]={11,22,33,44,55};
	char a[20],temp;
	gets(a);
	int n,i,j,value,pos;
	n=strlen(a);
	//n=sizeof(a)/sizeof(a[0]);
	//for(i=0;i<n;i++)
	//	printf("%d ",a[i]);
	//printf("\n");
	//printf("Enter a postion\n");
	//scanf("%d",&pos);
	//printf("Enter a value to insert\n");
	//scanf("%d",&value);
	//using direct index values reversing the array
	/*for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}*/
	//Using pointers reversing the array
	char *p,*q;
	for(p=a,q=((n-1)+a);p<q;p++,q--)
	{
		temp=*p;
		*p=*q;
		*q=temp;
	}
	/*for(i=n-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
		a[pos-1]=value;
	}*/
	for(i=0;i<n;i++)
		printf("%c",a[i]);
	printf("\n");
}
