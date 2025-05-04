#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
        puts("Enter a char:");
        ch=getchar();
        if(isdigit(ch)){
                puts("Numeric Char\n");
        }
	else if(isupper(ch)){
                puts("Uppercase Alphabet\n");
        }
	else if(islower(ch)){
                puts("LowercaseAlphabet\n");
        }
	else{
                puts("Special Char\n");
        }
}


/*{
	char ch;
	puts("Enter a char:");
	ch=getchar();
	if(isdigit(ch)){
		puts("Numeric Char\n");
	}
	if(isupper(ch)){
		puts("Uppercase Alphabet\n");
	}
	if(islower(ch)){
		puts("LowercaseAlphabet\n");
	}
	if(!(isalpha(ch)||isdigit(ch))){
		puts("Special Char\n");
	}
}
*/
