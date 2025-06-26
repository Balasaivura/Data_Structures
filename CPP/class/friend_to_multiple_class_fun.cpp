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
	       //friend void XYZ: sum(ABC);//compile time error incomplete datatype
	       friend class XYZ;//COMPLETE XYZ class is a friend to ABC
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
	       void sum(ABC &obj)
	       {
		       cout<<obj.data1+obj.data2+data3+data4<<endl;
	       }
};
int main()
{
	ABC aobj;
	XYZ xobj;
	aobj.print();
	xobj.print();
	xobj.sum(aobj);
}
