#include<iostream>
using namespace std;

#include"matrix.h"
#include"matrix.cpp"

int main()
{
	Matrix M1,M2,M3,M4;
	M1.Input();
	M2.Input();

	M3=M1.Add(M2);
	M4=M1.Sub(M2);

	cout<<"M1:"<<endl;
	M1.Print();
	
	cout<<"M2:"<<endl;
	M2.Print();
	
	cout<<"M3:"<<endl;
	M3.Print();
	
	cout<<"M4:"<<endl;
	M4.Print();
}
