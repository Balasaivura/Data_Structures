#include<stdio.h>
int main()
{
	enum colors{white,pink,black,red,green=10,yellow,blue};
	printf("%d\n",red);//3
	printf("%d\n",yellow);//11
	printf("%d\n",white);//0
	printf("%d\n",blue);//12
}
