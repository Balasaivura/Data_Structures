#include<iostream>
using namespace std;

namespace SBI
{
	int account_no=123456;
	void print()
	{
		cout<<"sbi namespace"<<endl;
	}
}
namespace HDFC
{
	int account_no=987654;
	void print()
	{
		cout<<"HDFC namspace:"<<endl;
	}
}
int main()
{
	{
		using namespace SBI;
	cout<<account_no<<endl;
	print();
	}
	{
		using namespace HDFC;
	cout<<account_no<<endl;
	print();
	}
}
