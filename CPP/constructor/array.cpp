array :: array()
{
	cout<<"default cons:"<<endl;
	cout<<"enter the no of elements:"<<endl;
	cin>>size;
	ptr=new int[size];
	for(int i=0;i<size;i++)
	{
		cout<<"Enter the elements:"<<endl;
		cin>>ptr[i];
	}
}
array :: array(int *p,int s)
