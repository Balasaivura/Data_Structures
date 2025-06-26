#include<iostream>
using namespace std;
void Func(int one,int two=2,int three=3);
int main()
{
	Func(10,20,30);
	Func(10,20);
	Func(10);
}
void Func(int one,int two,int three)
{
	cout<<"One="<<one<<endl;
	cout<<"Two="<<two<<endl;
	cout<<"Three="<<three<<endl;
}
