#include<iostream>
using namespace std;
float interst(int bal,float r=5)
{
	return (bal*r/100);
}
int main()
{
	int amount;
	float res;
	char ch;
	cout<<"Enter the amount"<<endl;
	cin>>amount;
	while(1)
	{
		cout<<"Enter the choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 's':res=interst(amount);
				 cout<<"res= "<<res<<endl;
				 break;
			case 'c':res=interst(amount,6.5);
				 cout<<"res= "<<res<<endl;
				 break;
			case 'g':res=interst(amount,8);
				 cout<<"res= "<<res<<endl;
				 break;
		}
	}
}
