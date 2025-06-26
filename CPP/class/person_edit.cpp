#include<iostream>
using namespace std;

class person
{
	int age;
	char name[20];
	char gender[10];
	public:	string mobile;
	person()
		{
			cout<<"Enter the age:"<<endl;
			cin>>age;
			cout<<"Enter the name:"<<endl;
			cin>>name;
			cout<<"Enter the gender:"<<endl;
			cin>>gender;
			cout<<"Enter the mobile:"<<endl;
			cin>>mobile;
		}
		void print()
		{
			cout<<"age:"<<age<<endl;
			cout<<"name:"<<name<<endl;
			cout<<"gender:"<<gender<<endl;
			cout<<"mobile:"<<mobile<<endl;
		}
		friend void change_moblie_no(person &);
};
void change_mobile_no(person &p)
{
	cout<<"available no is:"<<p.mobile<<endl;
	cout<<"Enter new no:"<<endl;
	cin>>p.mobile;
	cout<<"mobile no updated successfully:"<<endl;
}
int main()
{
	person pobj;
	pobj.print();
	change_mobile_no(pobj);
	pobj.print();
}
