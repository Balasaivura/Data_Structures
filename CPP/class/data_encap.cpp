#include<iostream>
using namespace std;
class adder
{
	public:
		adder(int i=0)
		{
			total=i;
		}
		void addnum(int num)
		{
			total+=num;
		}
		int get_total()
		{
			return total;
		}
	private:
		int total;
};
int main()
{
	adder a;
	a.addnum(10);
	a.addnum(20);
	a.addnum(30);
	cout<<"total"<<a.get_total()<<endl;
}
