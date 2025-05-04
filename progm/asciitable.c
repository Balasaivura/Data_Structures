#include<stdio.h>
int main()
{
	int bit=8,ch=0;
	printf("char\tdecimal\n");
	do{
		printf("\n%c\t%d\t",ch,ch);
		bit=8;
		while(bit>=0){
			printf("%d",((ch>>bit)&1));
			--bit;
		}ch++;
	  }while(ch<=127);
			printf("\n");
			
	
}


/*{
	int bit=8,ch=0;
	printf("char\tdecima\n");
	while(ch<=127){
		printf("\n%c\t%d\t",ch,ch);
		bit=8;
		while(bit>=0){
			printf("%d",(ch>>bit)&1);
			--bit;
		}
		ch++;
		printf("\n");
	}
}


{
	int bit,ch;
	ch=0;
input:	printf("%c\t %d\t",ch,ch);
	bit=8;
TESTBIT:printf("%d",(ch>>bit)&1);
        --bit;
        if(bit>=0){
		goto TESTBIT;
        }
	++ch;
	printf("\n");
        if(ch<=127){
                goto input;
        }
        return 0;
}
*/
