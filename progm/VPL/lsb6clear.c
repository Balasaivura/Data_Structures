#include<stdio.h>
int main()
/*{
        int num,bit,pos;
        scanf("%d",&num);
        printf("actual:");
        for(bit=31;bit>=0;bit--)
        {

                printf("%d",((num>>bit)&1));

                
        }
        printf("\n");
        printf("modified:");
                num=num&~(1<<1);
                num=num&~(1<<3);
                num=num&~(1<<5);
                num=num&~(1<<7);
                num=num&~(1<<9);
                printf("%d\t",num);
        for(bit=31;bit>=0;bit--)
        {
                printf("%d",((num>>bit)&1));
        }
        
        printf("\n");
}

