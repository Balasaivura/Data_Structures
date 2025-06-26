#include<iostream>
using namespace std;
class csquare;
class crectangle
{
	int width,height;
	public:
		int area()
		{
			return (width*height);
		}
		void convert(csquare a);
};
class csquare
{
	private:
		int side;
	public:
		void set_value(int a)
		{
			side=a;
		}
		friend class crectangle;
};
void crectangle::convert(csquare a)
{
	width=a.side;
	height=a.side;
}
int main()
{
	csquare sqr;
	crectangle rect;
	sqr.set_value(4);
	rect.convert(sqr);
	cout<<rect.area();
}
