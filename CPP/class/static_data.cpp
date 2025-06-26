#include<iostream>
using namespace std;

class ABC
{
	int x,y;
	static int cnt;
	public:
		ABC()
		{
			cnt++;
			cout<<"default constructor"<<endl;
			cout<<"Enter x and y"<<endl;
			cin>>x>>y;
		}
		ABC(int a,int b)
		{
			cnt++;
			cout<<"parameter constructor"<<endl;
			x=a;
			y=b;
		}
		ABC(ABC &obj)
		{
			cnt++;
			cout<<"copy constructor"<<endl;
			x=obj.x;
			y=obj.y;
		}
		void print()
		{
			cout<<"x:"<<x<<endl;
			cout<<"y:"<<y<<endl;
			cout<<"Total no of objects:"<<cnt<<endl;
		}
		~ABC()
		{
			cout<<"ABC destructor"<<endl;
		}
};
int ABC :: cnt=2000;//defining the static data member of class
int main()
{
	ABC obj1;
	obj1.print();
	ABC obj2(10,20);
	obj2.print();
	ABC obj3=obj1;
	obj3.print();
	obj1.print();
}
