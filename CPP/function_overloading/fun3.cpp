#include<iostream>
using namespace std;
void Print(int i)
{
	cout<<"Here is int"<<i<<endl;
}
void Print(double f)
{
	cout<<"Here is float"<<f<<endl;
}
void Print(char c)
{
	cout<<"Here is char"<<c<<endl;
}
int main()
{
	Print(10);
	Print(15.6f);
	Print('a');
}
