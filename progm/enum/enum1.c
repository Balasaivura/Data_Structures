#include<stdio.h>
int main()
{
	enum colors{white=1,pink,black,red,green=10,yellow,blue=10};
	printf("%d\n",red);//4
	printf("%d\n",yellow);//11
	printf("%d\n",white);//1
	printf("%d\n",blue);//10
}
