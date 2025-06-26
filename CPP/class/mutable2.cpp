#include<iostream>
using namespace std;

class ABC
{
	mutable int x;
	int y;
	public:
		ABC()
		{
			cout<<"enter the x and y:"<<endl;
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
			cout<<"y:"<<y<<endl;
		}
		void Inc()
		{
			++x;
			++y;
		}
};
int main()
{
	const ABC obj;
	obj.print();
	//obj.Inc();
	//obj.print();
}
