#include<iostream>
using namespace std;
template <class any>
void Swap(any &a,any &b)
{
	cout<<"in generic"<<endl;
	any temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int n1=10,n2=20;
	float f1=12.3,f2=67.8;
	string s1="vector",s2="embedded";
	cout<<"n1= "<<n1<<endl;
	cout<<"n2= "<<n2<<endl;
	Swap(n1,n2);
	cout<<"n1= "<<n1<<endl;
	cout<<"n2= "<<n2<<endl;
	cout<<"f1= "<<f1<<endl;
	cout<<"f2= "<<f2<<endl;
	Swap(f1,f2);
	cout<<"f1= "<<f1<<endl;
	cout<<"f2= "<<f2<<endl;
	cout<<"s1= "<<s1<<endl;
	cout<<"s2= "<<s2<<endl;
	Swap(s1,s2);
	cout<<"s1= "<<s1<<endl;
	cout<<"s2= "<<s2<<endl;
}
