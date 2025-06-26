#include<iostream>
using namespace std;
int main()
{
	int *ptr=NULL;
	int v;
	ptr=new int;
	cout<<"Enter the data:"<<endl;
	cin>>*ptr;
	cout<<*ptr<<endl;
	
	
	cout<<"Enter the data:"<<endl;
	cin>>v;
	ptr=new int(v);
	cout<<*ptr<<endl;
	delete ptr;
}
