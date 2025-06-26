#include<iostream>
using namespace std;
class point
{
	friend void change_private(point &);
	public:
		point(void):m_i(0){}
		void printprivate(void)
		{
			cout<<m_i<<endl;
		}
	private:
		int m_i;
};
void change_private(point&i)
{
	i.m_i++;
}
int main()
{
	point spoint;
	spoint.printprivate();
	change_private(spoint);
	spoint.printprivate();
}

