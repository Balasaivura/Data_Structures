#include<iostream>
using namespace std;

#include "shape.cpp"
#include "rectangle.cpp"
#include "circle.cpp"
#include "square.cpp"

int main()
{
	shape *ptr=NULL;
	char choice;
	cout<<"R.Rectangle S.Square C.Circle E.Exit"<<endl;
	cout<<"Enter the choice:"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 'r':ptr=new rectangle;
			 break;
		case 's':ptr=new square;
			 break;
		case 'c':ptr=new circle;
			 break;
		case 'e':exit(0);
	}
	if(ptr)
	{
		ptr->CalArea();
		ptr->CalPeri();
		ptr->print();
		delete ptr;
		ptr=NULL;
	}
}
