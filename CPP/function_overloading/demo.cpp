#include<iostream>
using namespace std;
class test
{
	int x=100;
	mutable int y=10;
	public:void Print()
	       {
		       cout<<"y="<<y<<endl;
	       }
	       void inc()
	       {
		       y++;
	       }
};
int main()
{
	/*int x=100;
	cout<<"x="<<x<<endl;
	cout<<"x="<<::x<<endl;*/
	const test obj1;
	obj1.Print();
	obj1.inc();
	obj1.Print();
}
