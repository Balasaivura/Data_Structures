complex & operator+(complex &e1,complex &e2)
{
	static complex temp;
	temp.real=e1.real+e2.real;
	temp.img=e1.img+e2.img;
	return temp;
}
complex & operator-(complex &e1,complex &e2)
{
	static complex temp;
	temp.real=e1.real-e2.real;
	temp.img=e1.img-e2.img;
	return temp;
}
complex & operator+(complex &e,int x)
{
	static complex temp;
	temp.real=e.real+x;
	temp.img=e.img;
	return temp;
}
complex & operator-(complex &e,int x)
{
	static complex temp;
	temp.real=x-e.real;
	temp.img=0-e.img;
	return temp;
}
complex & operator--(complex &e)
{
	--e.real;
	--e.img;
	return e;
}
complex & operator--(complex &e,int)
{
	static complex temp;
	temp.real=e.real--;
	temp.img=e.img--;
	return temp;
}

