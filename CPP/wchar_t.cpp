#include<iostream>
#include<clocale>
using namespace std;
int main()
{
	setlocale(LC_CTYPE,"");
	wchar_t ch;
	for(ch=3072;ch<=3199;ch++)
	{
		wcout<<ch<<" ";
	}
}
