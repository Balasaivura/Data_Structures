#include<iostream>
using namespace std;
int data=100;
int main()
{
	int data=50;
	cout<<"Starting\n";
	cout<<::data<<endl;//global
	cout<<data<<endl;//local
	//int data=50;//compile time error
	data=60;
	cout<<"Out of block\n";
	cout<<::data<<endl;//global
	cout<<data<<endl;//local
	{
		int data=70;
		cout<<"In Block\n";
		cout<<::data<<endl;//global
		cout<<data<<endl;//local
	}
}
