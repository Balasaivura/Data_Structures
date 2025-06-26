#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[50];
	cout<<"Enter the string"<<"\n";
	cin>>str;
	cout<<str<<"\n";
	cout<<strlen(str)<<"\n";
	char s[20];
	strcpy(s,str);
	cout<<s<<"\n";
}

