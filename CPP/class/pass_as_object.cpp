#include<iostream>
using namespace std;
class height
{
	private:
		int feet,inches;
	public:
		void getht(int f,int i)
		{
			feet=f;
			inches=i;
		}
		void putheight()
		{
			cout<<"Height is: "<<feet<<"feet\t"<<inches<<"inches\t"<<endl;
		}
		void sum(height a,height b)
		{
			height n;
			n.feet=a.feet+b.feet;
			n.inches=a.inches+b.inches;
			if(n.inches==12)
			{	n.feet++;
				n.inches=n.inches-12;
			}
			cout<<"Height is: "<<n.feet<<"feet\t"<<n.inches<<"inches\t"<<endl;
		}
};
int main()
{
	height h,d,a;
	h.getht(6,5);
	a.getht(2,7);
	h.putheight();
	a.putheight();
	d.sum(h,a);
}
