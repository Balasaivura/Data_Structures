#include<stdio.h>
int main()
/*{
	char a[10]="abcde";
	char b[10]={'A','B','C','D','E'};
	int n,i;
	*n=sizeof(a)/sizeof(*a);
	printf("array a:");
	for(i=0;i<n;i++)
		printf("%c",a[i]);*
	printf("array a:%s",a);
	printf("\n");
	*n=sizeof(b)/sizeof(*b);
	printf("array b:");
	for(i=0;i<n;i++)
		printf("%c",b[i]);*
	printf("array b:%s",b);
	printf("\n");
}
{
	char str[10]="abcdef";
	char *ptr = str+3;
	printf("%s\n",str);
	printf("%s\n",str+3);
	printf("%s\n",ptr);
	printf("%s\n",ptr+1);
	str[2]=0;
	printf("%s\n",str);
	printf("%s\n",str+3);
	printf("%s\n",ptr);
	printf("%s\n",ptr+1);
}

{
	char str[10]="abcdef";
	char *ptr=str+2;
	printf("%s\n",str);
	str[2]=0;
	printf("%s...%s...\n",str,ptr);
}


{
	//int n=-34567;
	//n=printf("%d\n",n);
	//printf("%d\n",n);
	float v=5.5;
	int n;
	n=printf("v=%f\n",v);
	printf("%d\n",n);
	n=printf("n=%d\n",n);
	printf("%d\n",n);
	n=printf("%d",n);
	printf("%d\n",n);
	
}
*/
{
	char str[10]="abcdef";
	int n;
	n=printf("%s",str);
	printf("%d\n",n);
	str[2]='\0';
        n=printf("%s",str+3);
	printf("%d\n",n);
        n=printf("%s",str+6);
	printf("%d\n",n);
        n=printf("%s",str+2);
	printf("%d\n",n);
}
