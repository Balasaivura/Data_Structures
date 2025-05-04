#include<stdio_ext.h>
int main()
{
    int arr[100],n,i,j,t,temp;
    char ch;
    scanf("%d",&n);
    if(n>100||n<=0)
    {
            printf("Invalid size");
            return 0;
    }
   else
   {
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
            
    scanf(" %c",&ch);
   // __fpurge(stdin);
    scanf("%d",&t);
        if(ch=='r')
        {
            for(i=0;i<t;i++)
            {
                temp=0;
                for(j=n-2;j>=0;j--)
                    arr[j+1]=arr[j];
                arr[0]=temp;
            }
        }
	else if(ch=='l')
        {
            for(i=0;i<t;i++)
            {
                temp=0;
                for(j=0;j<n-1;j++)
                    arr[j]=arr[j+1];
                arr[n-1]=temp;
            }
        }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    }
}
