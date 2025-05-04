#include<stdio.h>
/*#define CUBE(x) x*x*x
int main()
{
	int a,b=3;
	a=CUBE(b++);
	printf("%d %d",a,b);
}

#define x 5+5
int main()
{
	int i;
	i=x*x*x;
	printf("%d",i);
}
*/
#define _vec(x) ++x*++x
int main()
{
	int a=3,z;
	z=++a*++a;
	a-=3;
	printf("%d %d",_vec(a),z);
}

