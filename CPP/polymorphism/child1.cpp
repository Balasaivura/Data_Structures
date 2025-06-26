class child1:public mother
{
		  char qual[20];
	public:child1()
	       {
		       cout<<"child1 constructor"<<endl;
		       cout<<"Enter the qual:"<<endl;
		       cin>>qual;
	       }
	       virtual void print()
	       {
		       mother::print();
		       cout<<"qual: "<<qual<<endl;
	       }
	       virtual void whomi()
	       {
		       cout<<"i am a child1:"<<endl;
	       }
	       virtual void hobby()
	       {
		       cout<<"listening to music:"<<endl;
	       }
	       virtual void profession()
	       {
		       cout<<"i am software developer:"<<endl;
	       }
	       virtual ~child1()
	       {
		       cout<<"child1 destructor:"<<endl;
	       }
};

