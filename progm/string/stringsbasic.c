#include<stdio.h>
#include<string.h>
int main()
/*{
	char str[20]="abcdef";
	char *ptr="ABCDEF";
	printf("%lu %lu\n",sizeof(str),sizeof(ptr));
	printf("%lu %lu\n",str,ptr);
	printf("%lu %lu\n",&str,&ptr);
	printf("str:%s ptr:%s\n",str,ptr);
	
	printf("str+1:%s ptr+1:%s\n",str+1,ptr+1);
	printf("%c %c\n",*str,*ptr);
	printf("%c %c\n",str[3],ptr[3]);
	
	printf("str:%s ptr:%s\n",str,ptr);
	strcpy(str+3,ptr+3);
	//strcpy(ptr+1,str+1);//here the destination is stored in ROM so,segmentation fault
	printf("str:%s ptr:%s\n",str,ptr);

}


{
	char s1[20]="abcdef";
	char s2[20]="ABCD";
	char *p="xyz";
	printf("s1:%s s2:%s p:%s\n",s1,s2,p);
	strcpy(s1+4,p);
	strcpy(s2+2,p+1);
	strcpy(s1+strlen(s1),p);
	strcpy(s2+strlen(s2),s1+strlen(p));
	//strcat(s1,p);
	//strcat(s2,s1+strlen(p));
	printf("s1:%s s2:%s p:%s\n",s1,s2,p);
}
*/


{
	char s1[20]="abcd";
	char s2[20]="xyz";
	char s3[40];
	printf("s1:%s s2:%s\n",s1,s2);
	strcpy(s3,s1);
	strcat(s3," ");
	strcat(s3,s2);
	//strcat(strcat(strcpy(s3,s1)," "),s2);
	printf("s3:%s\n",s3);
	return 0;
}



