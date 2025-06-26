#include<iostream>
using namespace std;

#include "complex.cpp"
#include "friend.cpp"

int main()
{
	complex e1(10,20),e2(67,89),e3,e4;
	e3=e1+e2;
	e4=e1-e2;
	cout<<"e1:";
	e1.print();
	cout<<"e2:";
	e2.print();
	cout<<"e3:";
	e3.print();
	cout<<"e4:";
	e4.print();
}
