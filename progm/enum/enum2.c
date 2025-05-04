#include<stdio.h>
int main()
{
	enum colors{white,pink,black,red,green=10,yellow,white=10};
	printf("%d\n",red);//3
	printf("%d\n",yellow);//11
	printf("%d\n",white);//0
}
