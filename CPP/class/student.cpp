#include<iostream>
using namespace std;
class Student
{
	int roll;
	char name[20];
	float marks[6];
	float totmarks,percentage;
	string grade;
	public:void Input()
	       {
		       cout<<"Enter the roll:"<<endl;
		       cin>>roll;
		       cout<<"Enter the name:"<<endl;
		       cin>>name;
		       cout<<"Enter the marks:"<<endl;
		       for(int i=0;i<6;i++)
		       {
			       cin>>marks[i];
		       }
	       }
	       void Print()
	       {
		       cout<<"Roll:"<<roll<<endl;
		       cout<<"Name:"<<name<<endl;
		       for(int i=0;i<6;i++)
		       {
		       		cout<<marks[i]<<" ";
		       }
		       cout<<"Total marks:"<<totmarks<<endl;
		       cout<<"Percentage:"<<percentage<<endl;
		       cout<<"Grade:"<<grade<<endl;
	       }
	       void CalTotMarks()
	       {
		       totmarks=0;
		       for(int i=0;i<6;i++)
		       {
			       totmarks+=marks[i];
		       }
	       }
	       void  CalPer()
	       {
		       percentage=totmarks/6;
	       }
	       void CalGrade()
	       {
		       if(percentage<40)
			       grade="C";
		       else if(percentage>=40 && percentage<50)
			       grade="B";
		       else if(percentage>=50 && percentage<60)
			       grade="B+";
		       else if(percentage>=60 && percentage<70)
			       grade="A";
		       else
			       grade="A+";
	       }
};
/*void foo()
{
	Student obj;
	cout<<obj.roll;
}*/
int main()
{
	Student obj1;
	obj1.Input();
	obj1.CalTotMarks();
	obj1.CalPer();
	obj1.CalGrade();
	obj1.Print();
}
