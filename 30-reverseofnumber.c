//This programe is designed to reverse of a given number

#include<stdio.h>
void main()
{
	int number,original,i,b,c=0;
	printf("Enter the number \n");
	scanf("%d",&number);
	original=number;
	while(number>0)
	{
		b=number%10;
		c=c*10+b;
		number=number/10;
	}
	printf("Reverse of a number is %d",c);
}
