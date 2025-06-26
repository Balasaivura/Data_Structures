class child : public parent
{
	int id;
	char qual[20];
	float per;
	public:child()
	       {
		       cout<<"Child constructor:"<<endl;
		       cout<<"enter the id:"<<endl;
		       cin>>id;
		       cout<<"Enter the qual:"<<endl;
		       cin>>qual;
		       cout<<"Enter the Percent:"<<endl;
		       cin>>per;
	       }
	       void print()
	       {
		       cout<<"Child print:"<<endl;
		       cout<<"id: "<<id<<endl;
		       cout<<"name: "<<name<<endl;
		       cout<<"age: "<<age<<endl;
		       cout<<"qual: "<<qual<<endl;
		       cout<<"per: "<<per<<endl;
	       }
	       ~child()
	       {
		       cout<<"child Destructor:"<<endl;
	       }
};
