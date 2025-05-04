#include<stdio.h>
/*int main()
{
	int x;
	x=3;
	f(x);
	printf("MAIN");
}
int f(int n)
{
	printf("F");
	if(n!=0)
		f(n-1);
}
*/
void main()
{
	printf("in main\n");
	int x=3;
	printf("in main:%d\n",fun(x));
	}
int fun(int x)
{
	static int s=10;
	int res;
	if (x)
	res=fun(--x);
	printf("x=%d s=%d res=%d\n",x,s,res);
	--s;
	return x+s;
}
