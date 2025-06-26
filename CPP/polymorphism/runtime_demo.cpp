#include<iostream>
using namespace std;

#include "parent.cpp"
#include "child.cpp"

int main()
{
	child cobj;
	/*parent *ptr=new child;
	//ptr=&cobj;
	ptr->print();
	delete ptr;*/
	cobj.print();
}
