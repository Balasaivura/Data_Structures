#include<stdio.h>
/*int main()
{

	int arr[6]={11,22,33,44,55,66};
	int *ptr=arr;
	printf("%d\n",*ptr++);//11
	printf("%d\n",++*ptr);//23
	printf("%d\n",*++ptr);//33
	ptr[1]++;//45
	ptr++;
	ptr[-1]++;//46
	ptr[0]++;//34
	printf("%d %d %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5]);//11 24 34 46 55 66
}


{
	int arr[6]={11,22,33,44,55,66};
	printf("%d\n",++*arr);//12
	printf("%d\n",*arr++);//error
}


{
	char arr[10]={'0','1','2','3','4','5','6','7','8','9'};
	char *cp;
	int *ip;
	cp=ip=arr;
	printf("%x %x\n",*cp,*ip);
	cp++;
	ip++;
	printf("%x %x\n",*cp,*ip);
}


*/


	void print(char *ptr,int n)
	{
		if(n)
			print(ptr+1,n-1);
		printf("%c",*ptr);
	}
	int main()
	{
		char arr[]={'a','b','c','d','e'};
		print(arr,sizeof(arr));
	}
