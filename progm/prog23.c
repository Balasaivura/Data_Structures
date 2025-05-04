#include<stdio.h>
int main()
{
	int a,res;
	printf("Enter 1 integer:\n");
	scanf("%d",&a);
	res=(~a);
	printf("bitwise ~ %d:%d\n",a,res);
	return 0;
}

/*{
	int a,b,res;
        printf("Enter 2 integers:\n");
        scanf("%d %d",&a,&b);
        res=a^b;
        printf("bitwise %d ^ %d :%d\n",a,b,res);
        return 0;
}


{
	int a,b,res;
        printf("Enter 2 integers:\n");
        scanf("%d %d",&a,&b);
        res=a|b;
        printf("bitwise %d | %d :%d",a,b,res);
        return 0;
}


{
	int a,b,res;
	printf("Enter 2 integers:\n");
	scanf("%d %d",&a,&b);
	res=a&b;
	printf("bitwise %d & %d :%d",a,b,res);
	return 0;
}
*/
