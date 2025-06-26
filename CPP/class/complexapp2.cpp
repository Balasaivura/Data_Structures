#include<iostream>
using namespace std;

#include"complex.h"
#include"complex.cpp"

int main()
{
	Complex e1,e2,e3,e4;
	e1.Input();
	e2.Input();

	e3=e1.Add(e2);
	e4=e2.Sub(e1);
	cout<<"e1:";
	e1.Print();
	cout<<"e2:";
	e2.Print();
	cout<<"e3:";
	e3.Print();
	cout<<"e4:";
	e4.Print();
}
