#include<iostream>
using namespace std;

class parent
{
	int data;
	protected:int data1;
	public:void setdata1()
	       {
		       cout<<"Enter the data:"<<endl;
		       cin>>data;
		       cout<<"Enter the data1:"<<endl;
		       cin>>data1;
	       }
	       void print()
	       {
		       cout<<"data:"<<data<<endl;
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
	       void print2()
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
	cout<<"size of child obj:"<<sizeof(cobj)<<endl;
	parent pobj;
	cout<<"size of parent obj:"<<sizeof(pobj)<<endl;
	cobj.setdata1();
	cobj.print();
	cobj.setdata2();
	cobj.print2();
	cobj.Inc();
	cobj.print();
	cobj.print2();
}
