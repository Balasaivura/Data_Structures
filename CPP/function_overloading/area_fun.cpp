#include<iostream>
using namespace std;
/*
void f(int);
void f(int &);//error
int main()
{
	int i=10;
	f(i);//error which function to call
	return 0;
}
void f(int i)
{
	cout<<"in f(int)"<<i<<endl;
}
void f(int &i)
{
	cout<<"in f(int &)"<<i<<endl;
}
*/
#define pi 3.14
class fn
{
	public:
		void area(int);//circle
		void area(int,int);//rectangle
		void area(float,int,int);//triangle
};
void fn::area(int r)
{
	cout<<"Area of circle: "<<pi*r*r<<endl;
}
void fn::area(int l,int b)
{
	cout<<"Area of rectangle: "<<l*b<<endl;
}
void fn::area(float a,int b,int c)
{
	cout<<"Area of triangle: "<<a*b*c<<endl;
}
int main()
{
	int ch,a,b,r;
	fn obj;
	cout<<"Funtion overloading"<<endl;
	cout<<"1.Area of Circle 2. Area of Rectangle 3.Area of Triangle"<<endl;
	cout<<"Enter the choice:"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:cout<<"Enter the radius of the circle"<<endl;
		       cin>>r;
		       obj.area(r);
		       break;
		case 2:cout<<"Enter the length&breath of the rectangle"<<endl;
		       cin>>a>>b;
		       obj.area(a,b);
		       break;
		case 3:cout<<"Enter the sides of the triangle"<<endl;
		       cin>>a>>b;
		       obj.area(0.5,a,b);
		       break;
		case 4:exit(0);
	}
}
