#include<stdio.h>
#include<string.h>
char *strrev(char *);
int main()
//without using pointer variables
/*{
	char s1[20];
	gets(s1);
	int i,j,n,flag;
	n=strlen(s1);
	for(i=0,j=n-1;i<j;i++,j--)
	{
		flag=0;
		if(s1[i]!=s1[j])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("not a pralindrome:\n");
	else
		printf("palindrome\n");
}
*/
//with using pointer variables
/*{
	char s1[10];
	char *left,*right;
	gets(s1);
	left=s1;
	right=s1+strlen(s1)-1;
	while(left<right)
	{
		if(*left!=*right)
			break;
		left++;right--;
	}
	if(left>=right)
		printf("palindrome\n");
	else
		printf("not palindrome\n");
}
*/
//using string reverse function
{
	char s1[20];
	gets(s1);
	if(strcmp(s1,strrev(s1))==0)
		printf("palindrome\n");
	else
		printf("not a palindrome\n");
}
char *strrev(char *s1)
{
	static char p[10];
	int n=strlen(s1)-1,i,j=0;
	for(i=n;i>=0;i--)
		p[j++]=s1[i];
	return p;
}
