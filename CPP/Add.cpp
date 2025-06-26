#include<iostream>
using namespace std;
int & Add(int &,int &);
int main()
{
	int a=10,b=20;
	//int c=Add(a,b);//here the return value is stored in temporary register variable and assigned to c variable
	int &c=Add(a,b);//here directly access the memory no temporary register variable
	cout<<c<<endl;
}
int & Add(int &x,int &y)
{
	static int z;
	z=x+y;
	return z;
	//return refernce of z
}
