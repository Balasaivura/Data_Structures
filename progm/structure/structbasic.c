#include<stdio.h>
struct product
{
	char name[20];
	float price;
	int quantity;
};
int main()
{
//	printf("%d\n",sizeof(struct product));
struct product v;
printf("Enter the name:\n");
scanf("%s",v.name);
printf("Enter the price:\n");
scanf("%f",&v.price);
printf("Enter the quantity:\n");
scanf("%d",&v.quantity);
printf("%s %.2f %d\n",v.name,v.price,v.quantity);
}
/*struct product
{
        char name[20];
        float price;
        int quantity;
}V={"moive",35,100};
int main()
{
//      printf("%d\n",sizeof(struct product));
printf("%s %.2f %d\n",V.name,V.price,V.quantity);
}
