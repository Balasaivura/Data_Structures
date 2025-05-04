#include<stdio.h>
int main()
{
	char c='abc';
	printf("%c\n",c);//here multicharacter occurs & overflow but o/p gives the 'c' so it takes the last char as i/p.
	c=0x61;
	printf("%c\n",c);//here the data is in hexa form so,0x61 converts to decimal is 97 then it is 'a'.
	c=128;
	printf("%d\n",c);//the range of signed char is -128 to 127 here overflow occurs and o/p is -128 .
	c=-200;
	printf("%d\n",c);//the range of signed char is -128 t0 127 here overflow occurs and o/p is 56 .
	c='a';
	printf("%d\n",c);//'a' value is 97 .
	c=48;
	printf("%c\n",c);//48 char is '0' .
	c=0101;
	printf("%c\n",c);//here i/p is in binary form so, 0101 converts to decimal is 97 char is 'a' .
	c='12030';
	printf("%d\n",c);//here multichracter occurs & overflow but o/p gives 48 because it takes last char as i/p '0' is 48 . 
}
