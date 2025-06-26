#include<iostream>
using namespace std;

class bank1;
#include "bank.h"
#include "bank1.h"
#include "bank.cpp"
#include "bank1.cpp"
int main()
{
	bank per;
	bank1 per1;
	char choice;
	while(1)
	{
		cout<<"t. transaction b.banking e.exit"<<endl;
		cout<<"Enter the choice"<<endl;
		cin>>choice;
		if(choice=='b')
		{
			per.menu();
		}
		else if(choice=='t')
		{
			if(per.transaction(per1))
			{
				cout<<"Transaction successfull:"<<endl;
			}
			else
			{
				cout<<"insufficent balance"<<endl;
			}
		}
		else if(choice=='e')
		{
			break;
		}
	}
		//cout<<"Balance:";
		per.balenq();
}
