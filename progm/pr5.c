#include<stdio.h>
void f2(void);
void f1(void){
	printf("hello from f1\n");
}
int main(){
	printf("hello from main\n");
	f1();
	printf("in main\n");
	f2();
	printf("in main\n");
	return 0;
}
void f2(void)
{
	printf("hello from f2\n");
	f1();
	printf("bye from f2\n");
}
