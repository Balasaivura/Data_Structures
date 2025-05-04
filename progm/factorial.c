#include<stdio.h>
int main()
{
	int n,fact,temp;
	fact=1;
	scanf("%d",&n);
	temp=n;
	while(temp>0){
		fact=fact*temp;
		temp--;
	}
	printf("fact(%d) = %d\n",n,fact);
}

