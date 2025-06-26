#include<iostream>
using namespace std;

void fun(int ,int &);
int main()
{
	int x=120,y=450;
	fun(y,x);
	cout<<x<<" "<<y<<endl;
}
void fun(int a, int &b)
{
	a++;
	b++;
}
