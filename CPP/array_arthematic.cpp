#include<iostream>
using namespace std;
int **Input(int **p,int r,int c)
{
	p=new int *[r];
	for(int i=0;i<r;i++)
	{
		p[i]=new int[c];
		for(int j=0;j<c;j++)
		{
			cout<<"Enter the elements:"<<endl;
			cin>>p[i][j];
		}
	}
	return p;
}
void Display(int **p,int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<p[i][j]<<" ";
		}
		cout<<endl;
	}
}
void Add(int **p,int **q,int **r,int row,int col)
{
	r=new int *[row];
	for(int i=0;i<row;i++)
	{
		r[i]=new int[col];
		for(int j=0;j<col;j++)
		{
			r[i][j]=p[i][j]+q[i][j];
			cout<<r[i][j]<<" ";
		}
		cout<<endl;
	}
}	
void Sub(int **p,int **q,int **r,int row,int col)
{
	r=new int*[row];
	for(int i=0;i<row;i++)
	{
		r[i]=new int[col];
		for(int j=0;j<col;j++)
		{
			r[i][j]=p[i][j]-q[i][j];
			cout<<r[i][j]<<" ";
		}
		cout<<endl;
	}
}	
void Mul(int **p,int **q,int **r,int row,int col)
{
	r=new int*[row];
	for(int i=0;i<row;i++)
	{
		r[i]=new int[col];
		for(int j=0;j<col;j++)
		{
			r[i][j]=p[i][j]*q[i][j];
			cout<<r[i][j]<<" ";
		}
		cout<<endl;
	}
}	
void Div(int **p,int **q,int **r,int row,int col)
{
	r=new int*[row];
	for(int i=0;i<row;i++)
	{
		r[i]=new int[col];
		for(int j=0;j<col;j++)
		{
			r[i][j]=p[i][j]/q[i][j];
			cout<<r[i][j]<<" ";
		}
		cout<<endl;
	}
}	
int main()
{
	int **p=NULL,**q=NULL;
	int row,col;
	char choice;
	cout<<"Enter the no of rows and cols:"<<endl;
	cin>>row>>col;
	p=Input(p,row,col);
	q=Input(q,row,col);
	Display(p,row,col);
	Display(q,row,col);
	while(1)
	{
		int **r=NULL;
		cout<<"choices are + - * exit /"<<endl;
		cout<<"Enter the choice:"<<endl;
		cin>>choice;
		switch(choice)
		{
			case '+':Add(p,q,r,row,col);
				 break;
			case '-':Sub(p,q,r,row,col);
				 break;
			case '*':Mul(p,q,r,row,col);
				 break;
			case '/':Div(p,q,r,row,col);
				 break;
			case 'e':exit(0);
		}
	/*	for(int i=0;i<row;i++)
		{
			delete[]r[i];
		}
		delete[]r;*/
	}
	for(int i=0;i<row;i++)
	{
		delete[]p[i];
		delete[]q[i];
	}
	delete[]p;
	delete[]q;
}
