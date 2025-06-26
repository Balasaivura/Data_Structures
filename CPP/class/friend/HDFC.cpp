HDFC :: HDFC()
{
	cout<<"enter the accno:"<<endl;
	cin>>accno;
	cout<<"enter the name:"<<endl;
	cin>>name;
	cout<<"enter the bal:"<<endl;
	cin>>bal;
}
void HDFC :: Deposit(float amt)
{
	bal+=amt;
}
void HDFC :: Balenq()
{
	cout<<"Balance avialable in our account is:"<<bal<<endl;
}
bool HDFC :: withDrawal(float amt)
{
	if(amt>bal)
	{
		return false;
	}
	else
	{
		bal-=amt;
		return true;
	}
}
bool HDFC :: Transaction(SBI &s)
{
	float amt;
	cout<<"enter the amt:"<<endl;
	cin>>amt;
	if(amt>bal)
		return false;
	else
	{
		s.bal+=amt;
		return true;
	}
}
void HDFC :: Menu()
{
	float amt;
	char choice;
	while(1)
	{
		cout<<"D.Deposit W.withdrawal B.Balenq E.return:"<<endl;
		cout<<"Enter the choice"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 'D':cout<<"enter the amt:"<<endl;
				 cin>>amt;
				 Deposit(amt);
				 break;
			case 'W':cout<<"Enter the amt:"<<endl;
				 cin>>amt;
				 if(withDrawal(amt))
					 cout<<"Transaction Successfull:"<<endl;
				 else
					 cout<<"Insufficent fund:"<<endl;
				 break;
			case 'B':Balenq();
		 		break;
			case 'E':return;
		}
	}
}	
