class shape
{
	protected:float area,peri;
	public:shape()
	       {
		       cout<<"shape cons"<<endl;
		       area=peri=0;
	       }
	       virtual ~shape()
	       {
		       cout<<"shape destructor:"<<endl;
	       }
	       virtual void CalArea()=0;
	       virtual void CalPeri()=0;
	       virtual void print()
	       {
		       cout<<"shape print:"<<endl;
		       cout<<"area: "<<area<<endl;
		       cout<<"peri: "<<peri<<endl;
	       }
};
