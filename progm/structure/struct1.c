#include<stdio.h>
struct movie
{
        char name[20];
        float rating;
        int cnt;
	int ticket;
};
int main()
{
//      printf("%d\n",sizeof(struct product));
struct movie v;
printf("Enter the name:\n");
scanf("%s",v.name);
printf("Enter the rating:\n");
scanf("%f",&v.rating);
printf("Enter the cnt:\n");
scanf("%d",&v.cnt);
printf("Enter the ticket:\n");
scanf("%d",&v.ticket);
printf("%s %.2f %d %d\n",v.name,v.rating,v.cnt,v.ticket);
}
