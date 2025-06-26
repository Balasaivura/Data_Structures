#include<iostream>
using namespace std;
void duplicate(int &a,int &b,int &c)
{
	a*=2;
	b*=2;
	c*=2;
}
void prevnext(int x,int &prev,int &next)
{
	prev=x-1;
	next=x+1;
}
int main()
{
	int x=1,y=3,z=7;
	duplicate(x,y,z);
	cout<<"x="<<x<<"y="<<y<<"z="<<z<<endl;
	x=100;
	prevnext(x,y,z);
	cout<<"Previous= "<<y<<",Next= "<<z<<endl; 
}

