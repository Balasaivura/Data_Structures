#include<iostream>
using namespace std;

class Student
{
	int roll;
	char name[20];
	float marks[6];
	float totmarks,percentage;
	string grade;
	static int cnt;
	public :
		void input()
		{
			roll=++cnt;
			cout<<"Enter the name:"<<endl;
			cin>>name;
			cout<<"Enter the marks:"<<endl;
			for(int i=0;i<6;i++)
				cin>>marks[i];
		}
		void print()
		{
			cout<<"roll:"<<roll<<endl;
			cout<<"name:"<<name<<endl;
			cout<<"marks:";
			for(int i=0;i<6;i++)
				cout<<marks[i]<<" ";
			cout<<endl;
			cout<<"Total Marks:"<<totmarks<<endl;
			cout<<"Percentage:"<<percentage<<endl;
			cout<<"Grade:"<<grade<<endl;
		}
		void Calper()
		{
			percentage=totmarks/6;
		}
		void CalTotmarks()
		{
			totmarks=0;
			for(int i=0;i<6;i++)
				totmarks+=marks[i];
		}
		void Calgrade()
		{
			if(percentage<40)
				grade="C";
			else if(percentage>=40 && percentage < 50)
				grade="B";
			else if(percentage>=50 && percentage < 60)
				grade="B+";
			else if(percentage>=60 && percentage < 70)
				grade="A";
			else
				grade="A+";
		}
		static void TotalStudent()
		{
			cout<<"Total Students:"<<cnt<<endl;
		}
};
int Student :: cnt= 2000;
int main()
{
	Student :: TotalStudent();
	Student obj[3];
	for(int i=0;i<3;i++)
	{
		obj[i].input();
		obj[i].CalTotmarks();
		obj[i].Calper();
		obj[i].Calgrade();
	}
	for(int i=0;i<3;i++)
		obj[i].print();
	Student :: TotalStudent();
}
