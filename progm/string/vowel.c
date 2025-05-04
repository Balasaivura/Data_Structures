#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int i,j,n,cnt=0;
        char arr[20];
        srand(getpid());
        n=sizeof(arr)/sizeof(arr[0]);
        //for(i=0;i<n;i++)
        i=0;
	while(i<n)
	{
                //arr[i]=rand()%26+'A';//A to Z
		//arr[i]=rand()%26+'a';//a to z
		int flag=rand()%2;
		if(flag)
		arr[i]=rand()%26+'A';//A to Z
		else
		arr[i]=rand()%26+'a';//a to z
		if(arr[i-1]!=arr[i])
		i++;
	}

        printf("you supplied:");
        for(i=0;i<n;i++)
                printf("%c ",arr[i]);//*(arr+i);
        printf("\n");
        for(i=0;i<n;i++)
        {
		char ch=arr[i];
		if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{	cnt++;
			printf("Vowel at:%d & %c\n",i,arr[i]);
		}
	}
	printf("count:%d\n",cnt);
}
