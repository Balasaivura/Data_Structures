#include<stdio.h>
/*int x=50;//global variable stores in data segment
void main()
{
	int a=10,b=10;//local variable stores in stack segment
	static int s = 100;//it stores in data segment
	char *ptr="vector";//string constant are stores in text segment
	printf("%c\n",*ptr);
}
*/


int x=50;//global variable stores in data segment
void main()
{
        int a=10,b=10;//local variable stores in stack segment
	printf("in stack segment &a=%lu,&b=%lu\n",&a,&b);
        static int s = 100;//it stores in data segment
	printf("in data segment &s=%lu,&x=%lu\n",&s,&x);
        char *ptr="vector";//string constant are stores in text segment
        printf("in text segment %lu\n","vector");

}
