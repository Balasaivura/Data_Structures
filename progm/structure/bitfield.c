#include<stdio.h>
/*typedef struct date
{
	short int day:5;
	short int month:4;
	short int year;
}date;
int main()
{
	date today={16,10,2024};//it will give the negitive number bcoz signed int is taken
	date someday={2,4,2024};
	printf("%d %d %d\n",today.day,today.month,today.year);
	printf("%d %d %d\n",someday.day,someday.month,someday.year);
	printf("%ld\n",sizeof(date));
}*/
/*typedef struct date
{
       unsigned short int day:5;
       unsigned short int month:4;
       unsigned short int year;
}date;
int main()
{
        date today={16,10,2024};//here positive number becoz unsigned int is taken
        date someday={2,4,2024};
        printf("%d %d %d\n",today.day,today.month,today.year);
        printf("%d %d %d\n",someday.day,someday.month,someday.year);
        printf("%ld\n",sizeof(date));
}
*/
typedef struct Time
{
        unsigned short int hr:5;
        unsigned short int min:6;
        unsigned short int sec:6;
}time;
int main()
{
        time t1={12,27,30};
        time t2={23,59,58};
        printf("%d %d %d\n",t1.hr,t1.min,t1.sec);
        printf("%d %d %d\n",t2.hr,t2.min,t2.sec);
        printf("%ld\n",sizeof(time));
}

