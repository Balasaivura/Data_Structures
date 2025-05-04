#include<stdio.h>
#include<string.h>
#include<string.h>
void print(char **,int);
void sort(char **,int);
int main()
{
	char *s[5]={"int","char","float","long","double"};
	print(s,5);
	sort(s,5);
	print(s,5);
	return 0;
}
void print(char **p,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%s ",p[i]);
	printf("\n");
}
void sort(char **p,int n)
{
	int i,j;
	char *temp=NULL;
	for(i=n-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(strcmp(p[j],p[j+1])>0)
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}

}
