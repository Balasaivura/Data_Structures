#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int isprime(int );
int *primearray(int ,int );
void print(int *);
int cnt;
int main()
{
	int *parr=NULL;
	int min,max;
	FILE *fp1,*fp2;
	printf("Enter the min and max\n");
	scanf("%d %d",&min,&max);
	parr=primearray(min,max);
	fp1=fopen("fwritedata","w");
	fp2=fopen("fprintfdata","w");
	fwrite(parr,sizeof(int),cnt,fp1);
	for(int i=0;i<cnt;i++)
	{
		fprintf(fp2,"%d,",parr[i]);
	}
	fseek(fp1,0,2);
	long size1=ftell(fp1);
	fseek(fp2,0,2);
	long size2=ftell(fp2);
	print(parr);
	printf("total prime array elements:%d\n",cnt);
	printf("size of fwritefile is:%ld\n",size1);
	printf("size of fprintfdata is:%ld\n",size2);
	fclose(fp1);
	fclose(fp2);
}
int *primearray(int min,int max)
{
	int *p=NULL;
		for(;min<=max;min++)
		{
			if(isprime(min))
			{
				p=realloc(p,(cnt+1)*sizeof(int));
				p[cnt]=min;
				cnt++;
			}
		}
	return p;
}
int isprime(int n)
{
	int i,s;
	s=sqrt(n);
	if((n==0)||(n==1))
	{
		return 0;
	}
	else if(n==2)
		return 1;
	for(i=2;i<=s;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
		return 1;
	}
}
void print(int *p)
{
	for(int i=0;i<cnt;i++)
	{
		printf("%d,",p[i]);
	}
	printf("\n");
}
