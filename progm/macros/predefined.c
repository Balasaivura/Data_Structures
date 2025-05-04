#include<stdio.h>
int main()
{
	printf("Line no: %d\n",__LINE__);
	//represents current line number
	printf("File name: %s\n",__FILE__);
	//represents current file name
	printf("Time: %s\n",__TIME__);
	//compile time in "HH:MM:SS" format
	printf("Date : %s\n",__DATE__);
	//compile date in "MM:DD:YYYY" format
	printf("%d\n",(int)NULL);
	printf("%d\n",EOF);
}	
