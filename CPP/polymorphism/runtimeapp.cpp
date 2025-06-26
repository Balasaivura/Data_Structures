#include<iostream>
using namespace std;

#include "mother.cpp"
#include "child1.cpp"
#include "child2.cpp"
#include "child3.cpp"

int main()
{
	mother *ptr=NULL;
	int choice;
	while(1)
	{
		cout<<"1. child1 2. child2 3. child3 e.exit"<<endl;
		cout<<"Enter the choice:"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:ptr=new child1;
			       break;
			case 2:ptr=new child2;
			       break;
			case 3:ptr=new child3;
			       break;
			case 'e':exit(0);
			default:cout<<"invalid choice:"<<endl;
		}
		if(ptr)
		{
			ptr->whomi();
			ptr->hobby();
			ptr->profession();
			ptr->print();
			delete ptr;
			ptr=NULL;
		}
	}
}

