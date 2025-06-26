#include<iostream>
using namespace std;
class ABC
{
	int data1,data2;
	public:void Print()
		{
			cout<<"Data1:"<<data1<<endl;
			cout<<"Data2:"<<data2<<endl;
		}
		void Input()
		{
			cout<<"in Input:"<<endl;
			cout<<"enter the data1 and data2"<<endl;
			cin>>data1>>data2;
		}
		ABC()
		{
			cout<<"ABC construct:"<<endl;
			cout<<"enter the data1 and data2:"<<endl;
			cin>>data1>>data2;
		}
};
int main()
{
	ABC obj1;
}
