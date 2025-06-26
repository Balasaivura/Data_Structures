class child2:public mother
{
		  char mobile[20];
	public:child2()
	       {
		       cout<<"child2 constructor"<<endl;
		       cout<<"Enter the mobile:"<<endl;
		       cin>>mobile;
	       }
	       virtual void print()
	       {
		       mother::print();
		       cout<<"mobile: "<<mobile<<endl;
	       }
	       virtual void whomi()
	       {
		       cout<<"i am a child2:"<<endl;
	       }
	       virtual void hobby()
	       {
		       cout<<"playing cricket:"<<endl;
	       }
	       virtual void profession()
	       {
		       cout<<"i am doctor:"<<endl;
	       }
	       virtual ~child2()
	       {
		       cout<<"child2 destructor:"<<endl;
	       }
};

