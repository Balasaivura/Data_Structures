#include<iostream>
using namespace std;
int main()
{
	string s1,s5;
	cout<<"Enter the string:"<<endl;
	cin>>s1;
	cout<<s1<<endl;

	string s2,s3,s4;
	cout<<"Enter the string1 and string2"<<endl;
	cin>>s2>>s3;
	cout<<s2<<" ";
	cout<<s3<<" ";
	if(s2==s3)
		cout<<"both are equal:"<<endl;
	else
		cout<<"both are not equal:"<<endl;

	s4=s2+s3;
	cout<<"Concatinated string: ";
	cout<<s4<<"\n";

	s5=s1;
	cout<<"string copy: ";
	cout<<s5<<endl;
}
