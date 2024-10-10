//This programe is designed to check whether number is Palindrom or not using function
#include<stdio.h>
int Palindrom();
void main()
{
	int number;
	printf("Enter the number \n");
	scanf("%d",&number);
	Palindrom(number);
}
int Palindrom(int number)
{
	int c=0,b=0;
	int original=number;
	while(number>0)
	{
		b=number%10;
		c=c*10+b;
		number=number/10;
	}
	if(original==c)//condition for being Palindrom number
	{
		printf("%d is a Palindrom number",original);
	}
	else
	{
		printf("%d is not a Palindrom number",original);
	
	}
}
