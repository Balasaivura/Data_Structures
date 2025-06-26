#include<iostream>
using namespace std;
class Crectangle
{
	int x,y;
	public:
		void set_value(int,int);
		int area()
		{
			return (x*y);
		}
};
void Crectangle::set_value(int a,int b)
{
	x=a;
	y=b;
}
//int Crectangle::area();
int main()
{
	Crectangle obj,obj1;
	obj.set_value(10,20);
	cout<<"Area of rectangle: "<<obj.area()<<endl;
	obj1.set_value(30,60);
	cout<<"Area of rectangle: "<<obj1.area()<<endl;
}
