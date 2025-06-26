bank1 :: bank1()
{
	cout<<"Enter the account number:"<<endl;
	cin>>accno;
	cout<<"Enter the Name:"<<endl;
	cin>>name;
	cout<<"Enter the balance:"<<endl;
	cin>>amount;
}
void bank1 :: deposit(void)
{
	float money;
	cout<<"Enter the money to deposit:"<<endl;
	cin>>money;
	amount=amount+money;
}
bool bank1 :: withdraw(void)
{
	float money;
	cout<<"Enter the money to withdraw:"<<endl;
	cin>>money;
	if(money>amount)
	{
		//cout<<"Insufficent balance:"<<endl;
		return false;
	}
	else
	{
		amount=amount-money;
		return true;
	}
}
void bank1 :: balenq(void)
{
	cout<<"Balance:"<<amount<<endl;
}
void bank1 :: menu()
{
	char choice;
	while(1)
	{
		cout<<"d.deposit w.whitdraw b.balenq e.exit"<<endl;
		cout<<"Enter the choice"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 'd':deposit();
				 break;
			case 'w':if(withdraw())
				 {
					 cout<<"Withdraw successfull:"<<endl;
				 }
				 else
				 {
					 cout<<"Insufficent balance"<<endl;
				 }
				 break;
			case 'b':balenq();
				 break;
			case 'e':return;
		}
	}
}

