#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
#include<string.h>
typedef struct productDB
{
	char pname[20];
	float price;
	int quantity;
	float totalprice;
}pdb;
int cnt;
pdb *add_to_cart(pdb *);
void remove_product(pdb *);
void modify_cart(pdb *);
void view_cart(pdb *);
int main()
{
	pdb *db=NULL;
	char ch;
	while(1)
	{
		printf("a.add to cart v.view cart m.modify quantity r.remove product e.exit\n");
		printf("Enter the choice\n");
		__fpurge(stdin);
		scanf("%c",&ch);
		switch(ch)
		{
			case 'a':db=add_to_cart(db);
				 break;
			case 'v':view_cart(db);
				 break;
			case 'm':modify_cart(db);
				 break;
			case 'r':remove_product(db);
				 break;
			case 'e':exit(0);
		}
	}
}
pdb *add_to_cart(pdb *p)
{
	p=realloc(p,(cnt+1)*sizeof(pdb));
	printf("Enter the product name:");
	scanf("%s",p[cnt].pname);
	printf("Enter the price:");
	scanf("%f",&p[cnt].price);
	printf("Enter the quantity:");
	scanf("%d",&p[cnt].quantity);
	p[cnt].totalprice=p[cnt].price*p[cnt].quantity;
	cnt++;
	return p;
}
void view_cart(pdb *p)
{
	if(cnt==0)
		printf("Your cart is empty\n");
	else
	{
		float total=0;
		printf("Pname    Price    Quantity    Totalprice\n");
		for(int i=0;i<cnt;i++)
		{
			printf("%s	%.2f	%d	%.2f\n",p[i].pname,p[i].price,p[i].quantity,p[i].totalprice);
			total=total+p[i].totalprice;
		}
		printf("Total :                       %.2f\n",total);
		
	}
}
void remove_product(pdb *p)
{
	char s1[20];
	int flag=0;
	printf("Enter the Product name to remove:");
	scanf("%s",s1);
	for(int i=0;i<cnt;i++)
	{
		if(strcmp(p[i].pname,s1)==0)
		{
			memmove(p+i,p+i+1,(cnt-i-1)*sizeof(pdb));
			cnt--;
			p=realloc(p,cnt*sizeof(pdb));
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("%s Product name is not found\n",s1);
	}
}
void modify_cart(pdb *p)
{
	char s1[20];
	int flag=0;
	printf("Enter the Product name to modify quantity\n");
	scanf("%s",s1);
	for(int i=0;i<cnt;i++)
	{
		if(strcmp(p[i].pname,s1)==0)
		{
			printf("Enter the modified quntitiy:");
			scanf("%d",&p[i].quantity);
			p[i].totalprice=p[i].quantity*p[i].price;
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("%s Product name is not found\n",s1);
	}
}
