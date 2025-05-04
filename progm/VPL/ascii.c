#include<stdio.h>
int main()
// Using For loop
{
	unsigned char ch;
	int bit;
	printf("Decimal\tChar\t Binary");
	for(ch=0;ch<=127;ch++,printf("\n"))
	{
		printf("%d...%c...",ch,ch);
		for(bit=8;bit>=0;bit--)
		{
			printf("%d",((ch>>bit)&1));
		}
	}
}


// Using While loop
/*{
	int bit=8;
	unsigned char ch=0;
	printf("char\t decimal\t binary");
	while(ch<=127){
		printf("\n%c\t %d\t",ch,ch);
		bit=8;
		while(bit>=0){
			printf("%d",((ch>>bit)&1));
			bit--;
		}
		ch++;
	}
	printf("\n");
}
*/
