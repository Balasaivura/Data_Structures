#include<iostream>
using namespace std;
class rectangle
{
	int ber,len;
	public:
		void set_values(int,int);
		int area()
		{
			return len*ber;
		}
		friend rectangle duplicate(rectangle);
};
void rectangle::set_values(int a,int b)
{
	len=a;
	ber;b;
}
rectangle duplicate(rectangle rectparam)
{
	rectangle rectres;
	rectres.len=rectres.len*2;
	rectres.ber=rectres.ber*2;
	return (rectres);
}
int main()
{
	rectangle rect,rectb;
	rect.set_values(2,3);
	rectb=duplicate(rect);
	cout<<"rect: "<<rect.area()<<endl;
	cout<<"rectb: "<<rectb.area()<<endl;
}
