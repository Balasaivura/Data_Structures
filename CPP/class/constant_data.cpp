#include<iostream>
using namespace std;
class ABC
{
	int x;
	const int y;
	public : ABC():y(10)
		 {
			 cout<<"Enter the x:"<<endl;
			 cin>>x;
		 }
		 ABC(int a,int b):y(b)
		{
			x=a;
		}
		 ABC(ABC &obj):y(obj.y)
		{
			x=obj.x;
		}
		 void print()
		 {
			 cout<<"x:"<<x<<endl;
			 cout<<"y:"<<y<<endl;
		 }
		 void inc()
		 {
			 ++x;
			 //++y;//error
		 }
};
int main()
{
	//ABC obj1;
	//ABC obj1(30,60);
	ABC obj2(30,60);
	ABC obj1(obj2);
	obj1.print();
	obj1.inc();
	obj1.print();
}

