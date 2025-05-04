#include<stdio.h>
int main()
/*{
	int x,y,z;
	scanf("%d %d",&x,&y);
	z=x/y;
	printf("%d\n",z);
}
*/
// to overcome the floating point expection we use conditional statement
{
	int x,y,z;
	scanf("%d %d",&x,&y);
	z=(y==0)?printf("Invalid y value\n"):printf("%d\n",x/y);
}
