#include<iostream>
using namespace std;
int **Input(int **q,int r,int c)
{
	q=new int*[r]; //array of r integer pointers
	for(int i=0;i<r;i++)
	{
		q[i]=new int[c];
		for(int j=0;j<c;j++)
		{
			cout<<"Enter the element:"<<endl;
			cin>>q[i][j];
		}
	}
	return q;
}
void Display(int **q,int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<q[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int **p=NULL;
	int row,col;
	cout<<"Enter the no of rows and cols:"<<endl;
	cin>>row>>col;
	p=Input(p,row,col);
	Display(p,row,col);
	for(int i=0;i<row;i++)
	{
		delete[]p[i];
	}
	delete[]p;
}
