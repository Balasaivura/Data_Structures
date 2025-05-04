#include<stdio.h>
int main()
{
	char ch;
	ch=getchar();
	ch=(ch>=65)&&(ch<=90)?printf("%c upper to lower %c\n",ch,ch+32):
	(ch>=97)&&(ch<=122)?printf("%c lower to upper %c\n",ch,ch-32):printf("enter valid character\n");
	return 0;
}

/*{
	int res;
        int res;
        char ch;
        ch=getchar();
        res=(ch>=65)&&(ch<=90)?printf("%c is uppercase\n",ch):
        (ch>=48)&&(ch<=57)?printf("%c is integer\n",ch):
        (ch>=97)&&(ch<=122)?printf("%c is lower\n",ch):printf("%c is special char\n",ch);
        return 0;
}

	char ch;
	ch=getchar();
	res=(ch>=65)&&(ch<=90);
	res=(res==1)?printf("%c is uppercase\n",ch):printf("%c is lowercase\n",ch);
	res=(ch>=48)&&(ch<=57);
	res=(res==1)?printf("%c is integer\n",ch):printf("%c is special char\n",ch);
	return 0;
}


{
	int res;
	char ch;
	ch=getchar();
	res=((ch>=65)&&(ch<=90)||(ch>=97)&&(ch<=122));
	res=(res==1)?printf("%c is a alphabet\n",ch):printf("%c is not a alphabet\n",ch);
	return 0;
}

{
	char ch;
	int res;
	ch=getchar();
	res=(ch>=65)&&(ch<=90);
	res=(res==1)?printf("%c is uppercase\n",ch):printf("%c is lowercase\n",ch);
	return 0;
}

{
	int a;
	printf("enter a interger:");
	scanf("%d",&a);
	a=(a%2==0)?printf("%d is even\n",a):printf("%d is odd\n",a);
	return 0;
}


{
	int a,b,c,res;
	printf("enter 3 integers:");
	scanf("%d %d %d",&a,&b,&c);
	res=((a>b)?(a>c?a:c):(b>c?b:c));
	printf("highest is :%d\n",res);
	return 0;
}


{
	int a,b,res;
	printf("enter 2 integers:");
	scanf("%d %d",&a,&b);
	res=(a>b)? a:b;
	printf("hightest is :%d\n",res);
	return 0;
}
*/
