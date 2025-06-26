#include<iostream>
using namespace std;
#define MAX 5
class Stack
{
	int a[MAX];
	int top;
	void  Push(int d)
	{
		if(top==MAX-1)
			cout<<"Stack is Full:"<<endl;
		else
			a[++top]=d;
	}
	int Pop()
	{
		return a[top--];
	}
	int Peek()
	{
		return a[top];
	}
	void Inittop()
	{
		top=-1;
	}
	public:void Menu()
	       {
		       char choice;
		       int data;
		       Inittop();
		       while(1)
		       {
			       cout<<"P.Push R.Pop T.Peek E.return:"<<endl;
			       cout<<"Enter the choice:"<<endl;
			       cin>>choice;
			       switch(choice)
			       {
				       case 'P':cout<<"Enter the data:"<<endl;
						cin>>data;
						Push(data);
						break;
					case 'R':if(top==-1)
							 cout<<"Stack is empty:"<<endl;
						 else
							 cout<<"Data poped is:"<<Pop()<<endl;
						 break;
					case 'T':if(top==-1)
							 cout<<"Stack is empty:"<<endl;
						 else
							 cout<<"Top of the stack pointing to:"<<Peek()<<endl;
						 break;
					case 'E':return ;
			       }
		       }
	       }
};
int main()
{
	Stack s1;
	s1.Menu();
}
