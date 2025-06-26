void shopping :: addtocart(void)
{
	cout<<"enter the product name:"<<endl;
	cin>>cart[cnt].name;
	cout<<"Enter the quantity:"<<endl;
	cin>>cart[cnt].quantity;
	cout<<"Enter the cost"<<endl;
	cin>>cart[cnt].cost;
	cnt++;
}
void shopping :: print(void)
{
	for(int i=0;i<cnt;i++)
	{
		cout<<"name	:"<<cart[i].name<<endl;
		cout<<"quantity	:"<<cart[i].quantity<<endl;
		cout<<"cost	:"<<cart[i].cost<<endl;
	}
}
void shopping :: totalamount(void)
{
	amount=0;
	for(int i=0;i<cnt;i++)
	{
		amount+=cart[i].quantity*cart[i].cost;
	}
	cout<<"Total amount:"<<amount<<endl;
}
void shopping :: paybill(bank &s)
{
	s.balance-=amount;
}

