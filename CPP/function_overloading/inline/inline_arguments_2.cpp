#include<iostream>
using namespace std;
float discount(int bal,float r=1.5f)
{
	return (bal*r/100);
}
int main()
{
	int amount;
	float res;
	int ch;
	cout<<"Enter the amount"<<endl;
	cin>>amount;
	while(1)
	{
		cout<<"Enter the years"<<endl;
		cin>>ch;
		if(ch>=0&&ch<5)
		{
			res=discount(amount);
			cout<<"res= "<<res<<endl;
		}
		else if(ch>=5&&ch<8)
		{
			res=discount(amount,4.5);
			cout<<"res= "<<res<<endl;
		}
		else if(ch>=8)
		{
			res=discount(amount,6);
			cout<<"res= "<<res<<endl;
		}
	}
}
