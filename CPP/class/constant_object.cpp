#include<iostream>
using namespace std;

class ABC
{
	int data1,data2;
	public:
		ABC()
		{
			cout<<"constuctor"<<endl;
			cout<<"Enter the data1 & data2 :"<<endl;
			cin>>data1>>data2;
		}
		void print()const
		{
			cout<<"Data1:"<<data1<<endl;
			cout<<"Data2:"<<data2<<endl;
		}
		void Inc()
		{
			++data1;
			++data2;
		}
		~ABC()
		{
			cout<<"ABC Destuctor:"<<endl;
		}
};
int main()
{
	ABC obj1;
	obj1.print();
	obj1.Inc();
	obj1.print();

	const ABC obj2;//constant object
	obj2.print();
	//obj2.Inc();//error
}
