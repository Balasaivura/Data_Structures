#include<stdio.h>
#include<stdlib.h>
typedef struct Student
{
	int roll;
	char name[20];
	struct Student *link;
}ST;

ST *Add(ST *);
void Print(ST *);
ST *Del(ST *);

