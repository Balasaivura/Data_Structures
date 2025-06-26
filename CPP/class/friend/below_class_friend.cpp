#include<iostream>
using namespace std;
class XYZ;
class ABC
{
	int data1;
	public:ABC()
	       {
		       cout<<"enter the data1"<<endl;
		       cin>>data1;
	       }
	       void print()
	       {
		       cout<<"data1:"<<data1<<endl;
	       }
	       //friend void XYZ :: sum(ABC);//compile time error in complete datatype
	       friend class XYZ;//complete XYZ class is a friend to ABC
				
};
class XYZ
{
	int data2;
	public:XYZ()
	       {
		       cout<<"enter the data2:"<<endl;
		       cin>>data2;
	       }
	       void print()
	       {
		       cout<<"data2:"<<data2<<endl;
	       }
	       void sum(ABC obj)
	       {
		       cout<<obj.data1+data2<<endl;
	       }
};
int main()
{
	ABC obj1;
	XYZ xobj;
	obj1.print();
	xobj.print();
	xobj.sum(obj1);
}
