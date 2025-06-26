#include<iostream>
using namespace std;
int exforsys(int);
int main()
{
	int x;
	cout<<"n Enter the Input value"<<endl;
	cin>>x;
	cout<<"n the output is:"<<exforsys(x);
}
inline int exforsys(int x1)
{
	return 5*x1;
}
