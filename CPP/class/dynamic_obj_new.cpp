#include<iostream>
using namespace std;

class ABC
{
	int data1,data2;
	public : 
		ABC()
		{
			cout<<"Constuctor:"<<endl;
			cout<<"Enter the data1 and data2:"<<endl;
			cin>>data1>>data2;
		}
		void print() const
		{
			cout<<"data1:"<<data1<<endl;
			cout<<"data2:"<<data2<<endl;
		}
		void Inc()
		{
			++data1;
			++data2;
		}
		~ABC()
		{
			cout<<"ABC Destructor:"<<endl;
		}
};

int main()
{
	ABC *ptr;
	ptr=new ABC;//creating ABC object dynamically using new
	ptr->print();
	ptr->Inc();
	ptr->print();
	free(ptr);
}
