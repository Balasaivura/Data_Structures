#include<iostream>
using namespace std;

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
		       cout<<"complex Destructor:"<<endl;
	       }
	       friend complex & operator+(complex &,complex &);
	       friend complex & operator-(complex &,complex &);
	       friend complex & operator+(complex &,int);
	       friend complex & operator-(complex &,int);
	       friend complex & operator--(complex &);//pre dec
	       friend complex & operator--(complex &,int);//post dec
};

