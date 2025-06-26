#include<iostream>
using namespace std;
#define unsafe(i) ((i)>=0?(i):-(i))
inline int safe(int i)
{
	return i>=0?i:-i;
}
int f();
int main(int x)
{
	int ans;
	ans=unsafe(x++);
	ans=unsafe(f());

	ans=safe(x++);
	ans=safe(f());
}

