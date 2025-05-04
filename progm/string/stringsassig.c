#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20];
	char s2[20];
	char s3[20]={" "};
	gets(s1);
	gets(s2);
	strcpy(s3,s1+strlen(s1)/2);
	strcpy(s1+(strlen(s1)/2),s2);
	strcat(s1,s3);
	printf("s1:%s\n",s1);
}


/*{
	int i,m,n,pos;
	char s1[20];
	char s2[20];
	gets(s1);
	gets(s2);
	printf("Enter the position\n");
	scanf("%d",&pos);
	//n=strlen(s2)+strlen(s1);
	//m=strlen(s1)/2;
	memmove(s1+pos+strlen(s2),s1+pos,strlen(s1+pos)+1);
	//for(i=m;s2[i];i++)
		//s1[i+1]=s1[i];
	strncpy(s1+strlen(s1)/2,s2,strlen(s2));
	printf("s1:%s\n",s1);
}
*/

/*{

        int i,m,n;
        char s1[20];
        char s2[20];
        gets(s1);
        gets(s2);
        //  n=strlen(s2)+strlen(s1);
        m=strlen(s1)/2;
        memmove(s1+m+strlen(s2),s1+m,strlen(s1+m)+1);
        //for(i=m;s2[i];i++)
               // s1[i+1]=s1[i];
        strncpy(s1+strlen(s1)/2,s2,strlen(s2));
        printf("s1:%s\n",s1);
}
*/
