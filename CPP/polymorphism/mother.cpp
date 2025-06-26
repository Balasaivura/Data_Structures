class mother
{
	protected:int age;
		  char name[20];
	public:mother()
	       {
		       cout<<"mother constructor"<<endl;
		       cout<<"Enter the age:"<<endl;
		       cin>>age;
		       cout<<"Enter the name:"<<endl;
		       cin>>name;
	       }
	       virtual void print()
	       {
		       cout<<"age: "<<age<<endl;
		       cout<<"name: "<<name<<endl;
	       }
	       virtual void whomi()
	       {
		       cout<<"i am a mother:"<<endl;
	       }
	       virtual void hobby()
	       {
		       cout<<"gardening:"<<endl;
	       }
	       virtual void profession()
	       {
		       cout<<"i am home maker:"<<endl;
	       }
	       virtual ~mother()
	       {
		       cout<<"mother destructor:"<<endl;
	       }
};

