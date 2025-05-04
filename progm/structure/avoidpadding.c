#include<stdio.h>
/*#pragma pack(2)
typedef struct st
{
	char x;
	int y;
}st;
int main()
{
	printf("%ld\n",sizeof(st));
}
//padding zero by using pragma pack(1) to remove all padding in structure
#pragma pack(1)
typedef struct st
{
        char x;
        int y;
}st;
int main()
{
        printf("%ld\n",sizeof(st));
}*/
//by using __attribute__((packed))
typedef struct st
{
        char x;
        int y;
} __attribute__((packed)) st;
int main()
{
        printf("%ld\n",sizeof(st));
}

