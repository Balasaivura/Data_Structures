#include<stdio.h>
int main()
{
	int i=-1;
	int result;
	result=sizeof(i)>i;// implicit typecast is implemented here 4 > 4.2G i.e 0
	printf("result:%d\n",result);//here the signed is compared to unsigned one so -1 becomes unsigned int i.e 4.2G
	return 0;
}
/*{
	int result;
	char ch;
	printf("enter a char");
	scanf("%c",&ch);//dont use \n in scanf function
	result=(ch>=65)&&(ch<=90);
	printf("%c %d %d\n",ch,ch,result);
	result=(((ch>='A')&&(ch<='Z'))||((ch>='a')&&(ch<='z')));
	printf("%c %d %d\n",ch,ch,result);
}

{
	int a,b,c;
	int result;
	printf("enter 3 integers");
	scanf("%d %d %d",&a,&b,&c);//3 6 9
	result=(a<0)&&(b<0)&&(c<0);//0 
	printf("%d\n",result);//0
	result=(a>b)&&(b>c);
	printf("%d\n",result);//0
	}

{
	int a=5,b=0,c=-3,d=-1;
        printf("%d %d %d %d\n",a,b,c,d);//5 0 -3 -1
        d=++a||++b||++c;
        printf("%d %d %d %d\n",a,b,c,d);//6 0 -3(1st one incremented remaining both are neglected because of true condition at starting ) 1
        d=b++&&c++&&a++;
        printf("%d %d %d %d\n",a,b,c,d);//6 1 -3(1st condition is (0) remaining will be neglected after that b is incremented) 0
        d=++b&&++c&&++a;
        printf("%d %d %d %d\n",a,b,c,d);//7 2 -2 1(1st condition is true and all are incremented through the conditions)
        return 0;
}


{
	int a=5,b=0,c=-3,d=-1;
	printf("%d %d %d %d\n",a,b,c,d);//5 0 -3 -1
	d=a&&b;
	printf("%d %d %d %d\n",a,b,c,d);//5 0 -3 0
	d=b||c;
	printf("%d %d %d %d\n",a,b,c,d);//5 0 -3 1	
	d=!a||!c;
	printf("%d %d %d %d\n",a,b,c,d);//5 0 -3 0
	return 0;
}

{
	int a=1,b=0,c=-1,d=-1,result;
	d=--a&&++b&&++c;//0
	result=a++||b--&&c++;//0
	printf("%d\n",d);//0
	printf("%d\n",result);//0
	printf("%d %d %d\n",a,b,c);//1 -1 -1
	return 0;
}


{
	int x=1,y=0,z=-1;
	z=--x&&--y;
	printf("%d %d %d\n",x,y,z);//0 0 0
}


{
	int x=1,y=0,z;
	z=x++||--y;// x++ is true so,--y is negleted then it will remain same
	printf("%d\n",z);//1
	printf("%d\n",x);//2
	printf("%d\n",y);//0
	return 0;
}
*/
