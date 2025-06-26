#include<iostream>
using namespace std;
class SBI;
#include "HDFC.h"
#include "SBI.h"
#include "HDFC.cpp"
#include "SBI.cpp"

int main()
{
	SBI sobj;
	HDFC hobj;
	char choice;
	while(1)
	{
	cout<<"B.Banking T.Transaction E.exit:"<<endl;
	cout<<"enter the choice:"<<endl;
	cin>>choice;
	if(choice=='B')
	{
		hobj.Menu();
	}
	else if(choice=='T')
	{
		if(hobj.Transaction(sobj))
			cout<<"Transction successful:"<<endl;
		else
			cout<<"Tranaction failed:"<<endl;
	}
	else if(choice=='E')
	{
		exit(0);
	}
	else
		cout<<"invalid choice:"<<endl;
	}
	cout<<"sbi balance:"<<endl;
	sobj.Balenq();
	cout<<"hdfc balance:"<<endl;
	hobj.Balenq();
}
