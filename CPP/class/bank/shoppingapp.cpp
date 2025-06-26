#include<iostream>
using namespace std;

int cnt;
class bank1;
#include "bank.h"
#include "bank1.h"
#include "bank.cpp"
#include "bank1.cpp"
#include "shopping.h"
#include "shopping.cpp"
int main()
{
	shopping obj;
	bank obj2;
	bank1 obj3;
	char choice;
	while(1)
	{
		cout<<"a.add to cart p.print t.totalamount b.paybill e.exit"<<endl;
		cout<<"Enter the choice"<<endl;
		cin>>choice;
		if(choice=='a')
		{
			obj.addtocart();
		}
		if(choice=='p')
		{
			obj.print();
		}
		if(choice=='t')
		{
			obj.totalamount();
		}
		if(choice=='b')
		{
			obj.paybill(obj2);
		}
		if(choice=='e')
		{
			break;
		}
	}
	obj2.balenq();
}
