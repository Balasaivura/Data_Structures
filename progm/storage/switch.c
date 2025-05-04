#include<stdio.h>
int main()
{
	int a=1;
	switch(a)
	{
		//int b=5;	const int b=5;// this statement never gone execute becoz switch calling case 1 so directly goes to there
		static int b=5;
		case 1:printf("b=%d\n",b);
	}
}
