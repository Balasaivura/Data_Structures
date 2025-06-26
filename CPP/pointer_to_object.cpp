#include<iostream>
using namespace std;
class Rectangle
{
	float len,bre,area,peri;
	public:void CalArea()
	       {
		       area=len*bre;
	       }
	       void CalPeri()
	       {
		       peri=2*(len+bre);
	       }
	       void Print()
	       {
		       cout<<"Len:"<<len<<endl;
		       cout<<"bre:"<<bre<<endl;
		       cout<<"area:"<<area<<endl;
		       cout<<"peri:"<<peri<<endl;
	       }
	       void Input()
	       {
		       cout<<"Enter the len:"<<endl;
		       cin>>len;
		       cout<<"Enter the bre:"<<endl;
		       cin>>bre;
	       }
};
int main()
{
	Rectangle robj;
	Rectangle *ptr;
	ptr=&robj;
	ptr->Input();
	ptr->CalArea();
	ptr->CalPeri();
	ptr->Print();

	Rectangle *r;
	r=new Rectangle;//creating Rectangle object Dynamically using new operator
	r->Input();
	r->CalArea();
	r->CalPeri();
	r->Print();
	delete r;

	cout<<sizeof(Rectangle)<<endl;
	cout<<sizeof(robj)<<endl;
	cout<<sizeof(ptr)<<endl;
	cout<<sizeof(r)<<endl;
}
