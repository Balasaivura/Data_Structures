#include<iostream>
using namespace std;

class parent
{
	protected:int data1;
	public:void setdata1()
	       {
		       cout<<"Enter the data1:"<<endl;
		       cin>>data1;
	       }
	       void print()
	       {
		       cout<<"data1:"<<data1<<endl;
	       }
};
class child:public parent
{
	int data2;
	public:void setdata2()
	       {
		       cout<<"Enter the data2:"<<endl;
		       cin>>data2;
	       }
	       void print()
	       {
		       cout<<"data2:"<<data2<<endl;
	       }
	       void Inc()
	       {
		       ++data1;
		       ++data2;
	       }
};
int main()
{
	child cobj;
	cobj.setdata1();
	cobj.parent::print();//called parent print fun
	cobj.setdata2();
	cobj.print();//called child print fun
}
