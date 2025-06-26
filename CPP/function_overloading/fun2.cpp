#include<iostream>
using namespace std;
int abslt(int);
long abslt(long);
float abslt(float);
double abslt(double);
int main()
{
	int intgr=-5;
	long lng=34225;
	float flt=-5.56;
	double dbl=-45.6789;
	cout<<"absoulte value of"<<intgr<<" = "<<abslt(intgr)<<endl;
	cout<<"absoulte value of"<<lng<<" = "<<abslt(lng)<<endl;
	cout<<"absoulte value of"<<flt<<" = "<<abslt(flt)<<endl;
	cout<<"absoulte value of"<<dbl<<" = "<<abslt(dbl)<<endl;
}
int abslt(int num)
{
	if(num>=0)
		return num;
	else
		return (-num);
}
long abslt(long num)
{
	if(num>=0)
		return num;
	else
		return (-num);
}
float abslt(float num)
{
	if(num>=0)
		return num;
	else
		return (-num);
}
double abslt(double num)
{
	if(num>=0)
		return num;
	else
		return (-num);
}
