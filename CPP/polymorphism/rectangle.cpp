class rectangle:public shape
{
	protected:float len,bre;
	public:rectangle()
	       {
		       cout<<"rectangle cons:"<<endl;
		       cout<<"Enter the len & bre:"<<endl;
		       cin>>len>>bre;
	       }
	       ~rectangle()
	       {
		       cout<<"rectangle destructor:"<<endl;
	       }
	       void CalArea()
	       {
		       area=len*bre;
	       }
	       void CalPeri()
	       {
		       peri=2*(len+bre);
	       }
	       void print()
	       {
		       cout<<"rectangle print:"<<endl;
		       shape::print();
		       cout<<"len : "<<len<<" & bre: "<<bre<<endl;
	       }
};
