//This programe is designed to check whether number is Palindrom or not

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
	if(original==c)//condition for being Palindrom number
	{
		printf("%d is a Palindrom number",original);
	}
	else
	{
		printf("%d is not a Palindrom number",original);
	
	}
}
