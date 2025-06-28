#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio_ext.h>

typedef struct Employee
{
	int id;
	char name[20];
	struct Employee *link,*prev;
}EMP;

EMP *Del(EMP *);
EMP *Add_First(EMP *);
EMP *Add_Last(EMP *);
EMP *Del_Last(EMP *);
EMP *Del_First(EMP *);
EMP *Reverse(EMP *);
EMP *Add_Sort(EMP *);
void RPrint(EMP *);
void Display(EMP *);
