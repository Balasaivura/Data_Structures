#include<stdio.h>
int main()
{
	int ch=2;
	switch(ch)
	{
		default:
			printf("default1");
		case '1':
			printf("case1");
			break;
		default:
			printf("default2");
	}
}
/*int main()
{
	extern i;
	printf("%d",i);
	{
		int i=20;
		printf("%d",i);
	}
}*/
/*int main()
{
	int x=-17>>2;
	printf("%d",x);
}*/
/*int main()
{
	char *str1="Vector";
	char str2[]="Vector";
	if(str1==str2)
		printf("SAME");
	else
		printf("DIFFERENT");
}*/
/*int main()
{
	char *str1="abcd";
	char str2[]="abcd";
	printf("%d %d %d",sizeof(str1),sizeof(str2),sizeof("abcd"));
}*/
/*int main()
{
	int a=360;
	char *ptr;
	ptr=(char*)&a;
	printf("%d",*ptr);
}*/
/*int main()
{
	static int i;
	for(++i;++i;++i)
	{
		printf("%d ",i);
	if(i==4)
		break;
	}
	return 0;
}*/
/*char *my(char *ptr)
{
	ptr+=3;
	return (ptr);
}
int main()
{
char *x,*y;
x="vector";
y=my(x);
printf("y=%s",y);
}*/
/*int main()
{
	int real={1,2};
	int *arr=&real[0];
	int i;
	for(i=0;i<2;i++)
	{
		printf("%d",*arr);
		arr++;
	}
}*/


