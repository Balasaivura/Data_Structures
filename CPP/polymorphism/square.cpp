class square:public shape
{
	protected:float side;
	public:square()
	       {
		       cout<<"square cons:"<<endl;
		       cout<<"Enter the side:"<<endl;
		       cin>>side;
	       }
	       ~square()
	       {
		       cout<<"square destructor:"<<endl;
	       }
	       void CalArea()
	       {
		       area=side*side;
	       }
	       void CalPeri()
	       {
		       peri=4*side;
	       }
	       void print()
	       {
		       cout<<"square print:"<<endl;
		       shape::print();
		       cout<<"side: "<<side<<endl;
	       }
};
