class complex
{
	int real,img;
	public:complex(int a=0,int b=0)
	       {
		       real=a;
		       img=b;
	       }
	       void print()
	       {
		       cout<<real;
		       if(img>=0)
		       {
			       cout<<"+";
		       }
		       cout<<img<<"J"<<endl;
	       }
	       ~complex()
	       {
		       cout<<"complex destructor:"<<endl;
	       }
	       friend complex & operator+(complex &,complex &);
	       friend complex & operator-(complex &,complex &);
	       friend complex & operator+(complex &,int);
	       friend complex & operator+(int,complex &);
}

