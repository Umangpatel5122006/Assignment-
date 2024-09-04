// this programe is designed to check entered number is even or odd
#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("Enter your number: ");
	scanf("%d",&num);
	if(num%2==0)// Here entered number is dividing by 2 and if it is divisible than it is even
	{
		printf("Your number is even ");
	}
	else//if number is not divisible by 2 than it is odd
	{
		printf("Your number is odd");
	}
}
