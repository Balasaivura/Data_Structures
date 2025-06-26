#include<iostream>
using namespace std;
struct stu
{
	int roll;
	char str[20];
};
int main()
{
	int num;
	char data;
	float marks;
	double val;
	string name;
	char email[25];
	struct stu var;

	cout<<typeid(num).name()<<endl;
	cout<<typeid(data).name()<<endl;
	cout<<typeid(marks).name()<<endl;
	cout<<typeid(val).name()<<endl;
	cout<<typeid(name).name()<<endl;
	cout<<typeid(email).name()<<endl;
	cout<<typeid(var).name()<<endl;
}
