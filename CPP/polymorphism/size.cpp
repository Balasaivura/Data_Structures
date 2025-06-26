#include<iostream>
using namespace std;

class ABC
{
	int data1;
	public:ABC()
	       {
		       data1=20;
	       }
	       virtual void print()
	       {
		       cout<<"data1:"<<data1<<endl;
	       }
	       virtual void foo()
	       {
		       cout<<"in foo"<<endl;
	       }
};
int main()
{
	ABC obj1;
	cout<<sizeof(obj1)<<endl;
}
