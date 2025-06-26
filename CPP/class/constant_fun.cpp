#include<iostream>
using namespace std;

class ABC
{
	int x;
	int y;
	public:
		ABC()
		{
			cout<<"Enter the x and y :"<<endl;
			cin>>x>>y;
		}
		ABC(int a,int b)
		{
			x=a;
			y=b;
		}
		ABC(ABC &obj)
		{
			x=obj.x;
			y=obj.y;
		}
		void print()const
		{
			cout<<"x:"<<++x<<endl;
			cout<<"y:"<<++y<<endl;
		}
		void Inc()
		{
			++x;
			++y;
		}
};
int main()
{
	ABC obj1;
	obj1.print();
	obj1.Inc();
	obj1.print();
}
