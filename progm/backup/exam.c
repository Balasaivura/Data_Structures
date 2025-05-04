#include<stdio.h>
int find(int );
int main()
{
	int a=5;
	a=find(a+=find(a++));
	printf("%d",a);
}
int find(int a)
{
	return(a++);
}
/*int main()
{
	union{
		struct{	
			char c[2];
			char ch[2];
		}s;
		struct{
			short int i;
			short int j;
		}st;
	}u={12,1,15,1};
	printf("%d %d",u.st.i,u.st.j);
}*/
