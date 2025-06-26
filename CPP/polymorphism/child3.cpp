class child3:public mother
{
	public:child3()
	       {
		       cout<<"child3 constructor"<<endl;
	       }
	       virtual void whomi()
	       {
		       cout<<"i am a child3:"<<endl;
	       }
	       virtual void hobby()
	       {
		       cout<<"sleeping:"<<endl;
	       }
	       virtual void profession()
	       {
		       cout<<"i am still student:"<<endl;
	       }
	       virtual ~child3()
	       {
		       cout<<"child3 destructor:"<<endl;
	       }
};

