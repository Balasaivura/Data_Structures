class Student
{
	protected:int id;
		  char name[20];
	public:Student()
	       {
		       cout<<"Student constructor:"<<endl;
		       cout<<"Enter the id:"<<endl;
		       cin>>id;
		       cout<<"Enter the name:"<<endl;
		       cin>>name;
	       }
	       void print()
	       {
		       cout<<"id:"<<id<<endl;
		       cout<<"name:"<<name<<endl;
	       }
	       ~Student()
	       {
		       cout<<"Student Destructor:"<<endl;
	       }
};
