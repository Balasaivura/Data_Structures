#include<stdio.h>
int main()
{
	int value;
	scanf("%d",&value);
	value=(value<0)?printf("wrong input"):printf("%d inch=%0.2fcm\n%dcm=%0.2finch\n",value,value*2.54,value,value*0.3937);
}


/*{
	int bitMask=1;
	printf("%d\n",50&bitMask);//0
	bitMask=32;
	printf("%d\n",50&bitMask);//32
	printf("%d\n",60&bitMask);//32
	printf("%d\n",70&bitMask);//0
	bitMask=512;
	printf("%d\n",525&bitMask);//512
}

{
	int a=5,b=0,c=-3,d=-1;
	printf("a=%d b=%d c=%d d=%d\n",a,b,c,d);
	d=++a||++b||++c;
	printf("a=%d b=%d c=%d d=%d\n",a,b,c,d);
}

{
	int a=5,b=0,c=-3,d=-1;
	d=++a&&++b&&++c;
	printf("a=%d b=%d c=%d d=%d\n",a,b,c,d);
}

{
	int a=5,b=0,c=-3,d=-1;
	d=++a||b++&&++c;
	printf("a=%d b=%d c=%d d=%d\n",a,b,c,d);
}


/*{
	int a=-1,b=0,c=5;
	char ch=a;
	printf("%d\n",(ch>=97)&&(ch<=122));
	printf("%d\n",(a==0)||(b==0));
	printf("%d %d %d\n",(a<b),(b<c),(a<b)&&(b<c));
}
*/
