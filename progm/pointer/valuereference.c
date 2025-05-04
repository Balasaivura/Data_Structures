/*//Call by value
#include<stdio.h>
void swap(int,int);
int main()
{
	int a=10,b=20;
	printf("before swap %d %d\n",a,b);
	swap(a,b);//here value is passing
	printf("after swap %d %d\n",a,b);
	return 0;
}
void swap(int a,int b)//here value is accessing
{
	int t;
	t=a;
	a=b;
	b=t;
}
*/


//Call by Reference
#include<stdio.h>
void swap(int *,int *);
int main()
{
        int a=10,b=20;
        printf("before swap %d %d\n",a,b);
        swap(&a,&b);//here address is passing
        printf("after swap %d %d\n",a,b);
        return 0;
}
void swap(int *a,int *b)//here value is acessing though pointer variable
{
        int t;
        t=*a;
        *a=*b;
        *b=t;
}
