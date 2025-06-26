#include<iostream>
using namespace std;

class rectangle
{
	float len,bre,area,peri;
	public:
		void Calarea()
		{
			area=len*bre;
		}
		void Calperi()
		{
			peri=2*(len+bre);
		}
		void print()
		{
			cout<<"len:"<<len<<endl;
			cout<<"bre:"<<bre<<endl;
			cout<<"area:"<<area<<endl;
			cout<<"peri:"<<peri<<endl;
		}
		void input()
		{
			cout<<"Enter the len:"<<endl;
			cin>>len;
			cout<<"Enter the bre:"<<endl;
			cin>>bre;
		}
};

int main()
{
	rectangle robj;
	robj.input();
	robj.Calarea();
	robj.Calperi();
	robj.print();

	rectangle robj1;
	robj1.input();
	robj1.Calarea();
	robj1.Calperi();
	robj1.print();
}
