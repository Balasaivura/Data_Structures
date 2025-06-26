void Matrix :: Input()
{
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"Enter the element:"<<endl;
			cin>>a[i][j];
		}
	}
}
void Matrix :: Print()
{
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
Matrix & Matrix :: Add(Matrix &m)
{
	static Matrix temp;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			temp.a[i][j]=a[i][j]+m.a[i][j];
		}
	}
	return temp;
}
Matrix & Matrix :: Sub(Matrix &m)
{
	static Matrix temp;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			temp.a[i][j]=a[i][j]-m.a[i][j];
		}
	}
	return temp;
}
