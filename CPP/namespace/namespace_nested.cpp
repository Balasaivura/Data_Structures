#include<iostream>
using namespace std;
namespace A
{
	int x=20;
	namespace B
	{
		int x=30;
		namespace C
		{
			int x=50;
		}
	}
}
int main()
{
	cout<<A::x<<endl;
	cout<<A::B::x<<endl;
	cout<<A::B::C::x<<endl;

}
