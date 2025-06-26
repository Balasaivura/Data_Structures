#include<iostream>
using namespace std;
void sum(int a,int b,int c=0,int d=0)
{
	int res=a+b+c+d;
	cout<<"res= "<<res<<endl;
}
int main()
{
	sum(1,2);
	sum(1,2,3);
	sum(1,2,3,4);
}
