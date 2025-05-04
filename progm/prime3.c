#include<stdio.h>
#include<math.h>
int checkprime(int);//prototype/declaration
int checkdigit(int,int);
int checkassending(int);
int main()
{
	unsigned int data,n,st;
	int d;
	printf("How many prime numbers you want:\n");
	scanf("%u",&n);
	printf("Enter the starting number:\n");
	scanf("%u",&st);
	input:printf("Enter a digit you want to be present in each prime number:\n");
	scanf("%d",&d);
	if(d<0||d>9){
	printf("error:please supply a digit\n");
	goto input;}
	//removing even numbers and chechking with odd numbers
	if(st%2) data=st;
	else data=st+1;
	for(;n;data+=2)
	//for(data=st;n;data++)
	{
		//find the existance of d in data
		if(checkdigit(data,d))
			if(checkprime(data))
				{printf("%u ",data);
				//clearing the buffer
				fflush(stdout);
				n--;
				}
		
	}
	printf("\n");
}
int checkdigit(int temp,int digit)
{
	//checking the existence of digit in temp
	//if found return 1, else return 0
	while(temp)
	{
	if(temp%10==digit)
	return 1;

	temp/=10;
	}
	return 0;
}
int checkprime(int temp)
{
	//check temp is prime or not
	//if prime return 1 else return 0
	int v=2;
	//decresing the n number of iterations using sqrt
//	int sq=sqrt(temp);
	while(v<=temp)
	{
	if(temp%v==0)
	//return 0;
	break;
	v++;}
	//return 1;
	if(v==temp) return 1;
	else return 0;
  }
int checkassending(int temp)
{
	//checking integer is in assending order or not
	int v,digit1,digit2=0;
	for(v=temp;v;v/=10)
	{
		digit1=v%10;
		if(digit1>digit2){
			digit2=digit1;
			return 1;
			break;
		}
	}
	return 0;
}



