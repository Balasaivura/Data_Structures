class parent
{
	protected:int age;
		  char name[20];
	public:parent()
	       {
		       cout<<"parent constructor:"<<endl;
		       cout<<"Enter the age:"<<endl;
		       cin>>age;
		       cout<<"Enter the name:"<<endl;
		       cin>>name;
	       }
	       virtual void print()
	       {
		       cout<<"parent print:"<<endl;
		       cout<<"age: "<<age<<endl;
		       cout<<"name: "<<name<<endl;
	       }
	       ~parent()
	       {
		       cout<<"parent destructor:"<<endl;
	       }
};
