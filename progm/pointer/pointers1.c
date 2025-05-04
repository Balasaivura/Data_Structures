#include<stdio.h>
void main()
{
        int a=200;
        char *ptr=&a;
        printf("%d\n",a);
        printf("%d\n",*ptr);
        ++ptr;
        printf("%d\n",a);
        printf("%d\n",*ptr);
        ++*ptr;
        //++a;
        printf("%d\n",a);
        printf("%d\n",*ptr);
}
