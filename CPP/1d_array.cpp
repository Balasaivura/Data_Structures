#include<iostream>
#include<cstdlib>
#include<unistd.h>
using namespace std;
int *Input(int *p,int s)
{
	srand(getpid());
	p=new int[s];
	for(int i=0;i<s;i++)
	{
		p[i]=rand()%1000;
	}
	return p;
}
void Print(int *p,int s)
{
	for(int i=0;i<s;i++)
	{
		cout<<p[i]<<",";
	}
	cout<<endl;
}
void Sort(int *p,int s)
{
	int temp;
	for(int i=0;i<s-1;i++)
	{
		for(int j=i+1;j<s;j++)
		{
			if(p[i]>p[j])
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
}
int main()
{
	int *arr=NULL;
	int size;
	cout<<"Enter the size:"<<endl;
	cin>>size;
	arr=Input(arr,size);
	cout<<"Before sorting:"<<endl;
	Print(arr,size);
	Sort(arr,size);
	cout<<"After sorting:"<<endl;
	Print(arr,size);
}
