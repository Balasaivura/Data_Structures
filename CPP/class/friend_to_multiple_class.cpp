#include<iostream>
using namespace std;

class XYZ;//forward declaration
class ABC
{
	int data1,data2;
	public:ABC()
	       {
		       cout<<"enter the data1 and data2"<<endl;
		       cin>>data1>>data2;
	       }
	       void print()
	       {
		       cout<<"data1:"<<data1<<endl;
		       cout<<"data2:"<<data2<<endl;
	       }
	       friend void sum(ABC &,XYZ &);
};
class XYZ
{
	int data3,data4;
	public:XYZ()
	       {
		       cout<<"enter the data3 and data4"<<endl;
		       cin>>data3>>data4;
	       }
	       void print()
	       {
		       cout<<"data3:"<<data3<<endl;
		       cout<<"data4:"<<data4<<endl;
	       }
	       friend void sum(ABC &,XYZ &);
};
void sum(ABC &a,XYZ &b)
{
	cout<<a.data1+a.data2+b.data3+b.data4<<endl;
}
int main()
{
	ABC A;
	XYZ X;
	A.print();
	X.print();
	sum(A,X);
}
