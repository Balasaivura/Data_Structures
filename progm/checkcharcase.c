#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	puts("Enter a char:");
	ch=getchar();
	isdigit(ch)?puts("Number char"):isupper(ch)?puts("Uppercase Alphabet"):islower(ch)?puts("Lowercase Alphabet"):puts("Special char");
	return 0;
}




/*{
	char ch;
	puts("Enter a char:");
	ch=getchar();
	isdigit(ch)?puts("Number char"):0;
	isupper(ch)?puts("Uppercase Alphabet"):0;
	islower(ch)?puts("Lowercase Alphabet"):0;
	!(isdigit(ch)||isupper(ch)||islower(ch))?puts("Special char"):0;
}
*/
