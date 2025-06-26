#include<iostream>
using namespace std;

template<class type>
type Add(type a,type b)
{
	return a+b;
}
int main()
{
	string s1="vector";
	string s2="embbeded";
	string s3=Add(s1,s2);
	cout<<s3<<endl;
}

