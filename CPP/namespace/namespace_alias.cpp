#include<iostream>
using namespace std;
namespace A
{
	int x=20;
	void print()
	{
		cout<<"in A:"<<endl;
	}
}
namespace B=A;
int main()
{
	cout<<B::x<<endl;
	B::print();
}
