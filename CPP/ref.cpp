#include<iostream>
using namespace std;

int main()
{
	int num=10;
	int &ref=num;
	//ref=num;//error assign at initialize statement only not seprately
	cout<<"num:"<<num<<endl;
	cout<<"ref:"<<ref<<endl;
	num++;
	cout<<"num:"<<num<<endl;
	cout<<"ref:"<<ref<<endl;

	cout<<"num:"<<&num<<endl;
	cout<<"ref:"<<&ref<<endl;
	
/*	int y=20;
	&ref=y;//lvalue error here the reference no done
	cout<<"y:"<<y<<endl;
	cout<<"ref:"<<ref<<endl;*/
	
	/*** More than one variable reference to one variable ***/
	int &z=num;
	cout<<"num:"<<num<<endl;
	cout<<"ref:"<<ref<<endl;
	cout<<"z:"<<z<<endl;

	/*** Reference to the pointer ***/
	int n=34;
	int *p;
	int * &q=p;//q is a reference to integer pointer p
	p=&n;
	cout<<*p<<" "<<*q<<endl;
	cout<<"p: "<<&p<<endl;
	cout<<"q: "<<&q<<endl;

	/*** reference to constant ***/
	const int &r=10;
	cout<<r<<endl;
}
	
