#include<stdio.h>
int main()
{
	int a=5,b=0,c=-3,d=-1;
        d=a--||b--||c--;
        printf("%d %d %d %d\n",a,b,c,d);
        d=a--||(b--&&c--);
        printf("%d %d %d %d\n",a,b,c,d);
        d=(a--||b--)&&c--;
        printf("%d %d %d %d\n",a,b,c,d);
}


/*{
	int a=5,b=0,c=-3,d=-1;
        d=++a||++b||++c;
        printf("%d %d %d %d\n",a,b,c,d);
        d=++a||(++b&&++c);
        printf("%d %d %d %d\n",a,b,c,d);
        d=(++a||++b)&&++c;
        printf("%d %d %d %d\n",a,b,c,d);
}


{
	int a=5,b=0,c=-3,d=-1;
        d=a++||b++||c++;
        printf("%d %d %d %d\n",a,b,c,d);
        d=a++||(b++&&c++);
        printf("%d %d %d %d\n",a,b,c,d);
        d=(a++||b++)&&c++;
        printf("%d %d %d %d\n",a,b,c,d);
}


{
	int a=5,b=0,c=-3,d=-1;
	d=a||b||c;
	printf("%d\n",d);
	d=a||(b&&c);
	printf("%d\n",d);
	d=(a||b)&&c;
	printf("%d\n",d);
}


{
	printf("%d\n",sizeof(int)<-1);
	printf("%d\n",sizeof(int)>-1);
	printf("%d\n",sizeof(float)<-1);
}
*/
