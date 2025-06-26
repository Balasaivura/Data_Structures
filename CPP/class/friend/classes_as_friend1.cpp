#include<iostream>
using namespace std;
class B;
class A
{
	public:
		int func1(B& b);
	//private:
		int func2(B& b);
};
class B
{
	//private:
	public:		int _b;
	friend int A::func1(B&);
};
int A::func1(B& b)
{
	cout<<"In func1"<<endl;
	return b._b;
}
int A::func2(B& b)
{
	cout<<"In func2"<<endl;
	return b._b;
}
int main()
{
	A obj1;
	B obj;
	obj1.func1(obj);
	obj1.func2(obj);
}
