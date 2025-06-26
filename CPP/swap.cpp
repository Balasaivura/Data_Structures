#include<iostream>
using namespace std;

//void Swap(int *,int *);//swap by address
//void Swap(int &,int &);//swap by reference
void Swap(int ,int );//swap by value

int main()
{
	int n1=10,n2=20;
	cout<<"n1:"<<n1<<" n2:"<<n2<<endl;
	//Swap(&n1,&n2);//swap by address
	//Swap(n1,n2);//swap by reference
	Swap(n1,n2);//swap by Value
	cout<<"n1:"<<n1<<" n2:"<<n2<<endl;
}

/*** swap by Address ***/
/*void Swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}*/

/*** swap by reference ***/
/*void Swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}*/

/*** swap by value ***/
void Swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
