#include<stdio.h>
int a[5];//here it is a global declaration so, it filled with zeros(0) & storage is extern.
int main()
{
	//int arr[];//error
	int arr[]={10,20,30,40,50};
	//int arr[3]={10,20,30,40,50};// it stores first 3 values only remaining are neglated.
	//int arr[5];//all the values are garbage values if not giving any braces.
	//int arr[5]={};//here all the values are zeros(0) if we are giving empty braces.
	//int arr[5]={10,20};//here the first two values store as it has remaining are filled with zeros even though it is auto storage.
	printf("%d\n",arr[3]);//3rd index contained value
	printf("%d\n",sizeof(arr));//size of arrary in bytes
	printf("%d\n",sizeof(arr[0]));//size of paticular index in an array
	printf("%d\n",arr);//prints starting address of array
	printf("%d\n",*a);//prints starting index contained value
	printf("%d\n",arr+1);//next of starting address prints
	printf("%d\n",*(arr+1));//prints next of starting value
	printf("%d\n",*(arr+2));//prints second index value
}


