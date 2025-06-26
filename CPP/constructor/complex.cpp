Complex ::Complex(int a,int b)
{
	cout<<"Constructor:"<<endl;
	real=a;
	img=b;
}
Complex :: Complex(Complex &obj)
{
	cout<<"Copy constructor:"<<endl;
	real=obj.real;
	img=obj.img;
}
void Complex :: Print()
{
	cout<<real;
	if(img>=0)
		cout<<"+";
	cout<<img<<"i"<<endl;
}
