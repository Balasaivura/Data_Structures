#include<stdio.h>
int main()
{
        int num,bit,pos;
	pos=1;
        scanf("%d",&num);
        printf("actual:");
        for(bit=31;bit>=0;bit--)
        {

                printf("%d",((num>>bit)&1));

                
        }
        printf("\n");
        printf("modified:");
	while(pos<=9){
                num=num|(1<<pos);
		pos=pos+2;
	}
                printf("%d\t",num);
        for(bit=31;bit>=0;bit--)
        {
                printf("%d",((num>>bit)&1));
        }
        
        printf("\n");
}
