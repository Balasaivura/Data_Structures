bank :: bank()
{
	cout<<"Enter the account number:"<<endl;
	cin>>accno;
	cout<<"Enter the Name:"<<endl;
	cin>>name;
	cout<<"Enter the balance:"<<endl;
	cin>>balance;
}
void bank :: deposit(void)
{
	float money;
	cout<<"Enter the money to deposit:"<<endl;
	cin>>money;
	balance=balance+money;
}
bool bank :: withdraw(void)
{
	float money;
	cout<<"Enter the money to withdraw:"<<endl;
	cin>>money;
	if(money>balance)
	{
		//cout<<"Insufficent balance:"<<endl;
		return false;
	}
	else
	{
		balance=balance-money;
		return true;
	}
}
void bank :: balenq(void)
{
	cout<<"Balance:"<<balance<<endl;
}
bool bank :: transaction(bank1 &p)
{
	float money;
	cout<<"Enter the money:"<<endl;
	cin>>money;
	if(money>balance)
	{
		//cout<<"Insufficent balance:"<<endl;
		return false;
	}
	else
	{
		p.amount=p.amount+money;
		balance-=money;
		return true;
	}
}

void bank :: menu()
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

