#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio_ext.h>
#include<math.h>

typedef struct student
{
	int roll;
	char name[20];
	struct student *link;
}STUDENT;

//int cnt;
STUDENT *insert(STUDENT *);
STUDENT *syncfromfile(STUDENT *);
STUDENT *del(STUDENT *);
STUDENT *rev(STUDENT *);
void print(STUDENT *);
void save(STUDENT *);
int total(STUDENT *);
void prime(STUDENT *);
int isprime(int );
