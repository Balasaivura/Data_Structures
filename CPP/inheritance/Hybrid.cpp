#include<iostream>
#include<cstring>
using namespace std;

#include "student.cpp"
#include "ece.cpp"
#include "sports.cpp"
#include "result.cpp"

int main()
{
	Result robj;
	robj.CalTotMarks();
	robj.CalPer();
	robj.CalGrade();
	robj.Rprint();
}
