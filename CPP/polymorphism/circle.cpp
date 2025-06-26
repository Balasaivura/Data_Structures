class circle:public shape
{
	protected:float rad;
	public:circle()
	       {
		       cout<<"circle cons:"<<endl;
		       cout<<"Enter the radius:"<<endl;
		       cin>>rad;
	       }
	       ~circle()
	       {
		       cout<<"circle destructor:"<<endl;
	       }
	       void CalArea()
	       {
		       area=3.14*rad*rad;
	       }
	       void CalPeri()
	       {
		       peri=2*3.14*rad;
	       }
	       void print()
	       {
		       cout<<"circle print:"<<endl;
		       shape::print();
		       cout<<"rad: "<<rad<<endl;
	       }
};
