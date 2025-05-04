#include<stdio.h>
int main()
{
	int data,bit;
	printf("Enter data");
	scanf("%d",&data);
	printf("Enter bit position");
	scanf("%d",&bit);
	((bit>=0)&&(bit<=31))?(data&(1<<bit))?printf("bit is set\n"):printf("bit is clear\n"):printf("Error: Inavalid bit postion\n");
	return 0;
}


/*{
	int data,bit;
	printf("Enter data");
	scanf("%d",&data);
	printf("Enter bit position");
	scanf("%d",&bit);
	(data&(1<<bit))?printf("bit is set\n"):printf("bit is clear\n");
	return 0;
}

{
	int a;
	scanf("%d",&a);
	printf("%d\n",a&1);
	printf("%d\n",a&2);
	printf("%d\n",a&4);
	printf("%d\n",a&8);
}
*/
