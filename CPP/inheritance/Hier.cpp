#include<iostream>
using namespace std;

#include "student.cpp"
#include "ece.cpp"
#include "sports.cpp"

int main()
{
	ECE eobj;
	Sport sobj;

	eobj.print();
	eobj.Eprint();
	eobj.print();
	sobj.Sprint();
}
