#include<stdio.h>
int main()
{
	printf("%lu %lu %lu\n",sizeof('4'),sizeof("4"),sizeof(4));//4 2 4
	printf("%lu\n",sizeof(char));
	return 0;
}
/*{
	int x=20,y=35;
	x=y++ + x++;
	y=++y + ++x;
	printf("%d %d\n",x,y);
}
*/
