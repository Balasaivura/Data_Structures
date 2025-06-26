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
		ABC(int a,int b)
		{
			cout<<"parameter constructor:"<<endl;
			data1=a;
			data2=b;
		}
		ABC(ABC &obj)
		{
			cout<<"copy constuctor:"<<endl;
			data1=obj.data1;
			data2=obj.data2;
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
	delete ptr;
	ABC *q=new ABC(120,345);
	q->print();
	q->Inc();
	q->print();

	ABC *r=new ABC(*q);//here *q means object of ABC class
	r->print();
	r->Inc();
	r->print();
	delete q;
	delete r;
}
