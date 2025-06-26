#include<iostream>
using namespace std;
/*** Number of parameters ***/
/*void sum(int a,int b)
{
	int res=a+b;
	cout<<"res ="<<res<<endl;
}
void sum(int a,int b,int c)
{
	int res=a+b+c;
	cout<<"res= "<<res<<endl;
}*/
/*** Different data types ***/
/*void sum(int a,int b)
{
	int res=a+b;
	cout<<"res= "<<res<<endl;
}
void sum(int a,float b)
{
	float res=a+b;
	cout<<"res= "<<res<<endl;
}*/
/*** order of parameters ***/
void sum(int a,int b)
{
	int res=a+b;
	cout<<"res= "<<res<<endl;
}
void sum(float a,int b)
{
	float res=a+b;
	cout<<"res= "<<res<<endl;
}
int main()
{
	sum(10,20);
	sum(10.33f,20);
}
