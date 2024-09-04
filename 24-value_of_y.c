//This programe is designed to find value based on values of x and n
#include<stdio.h>


void main()
{
	float x,n,y;
	printf("Enter value of n \n");
	scanf("%f",&n);
	printf("Enter value of x \n");
	scanf("%f",&x);
	if(n==1)
	{

		y=1+x;
		printf("Value of y is %f \n",y);
		
	}
	else if(n==2)
	{
		
		y=1+x/n;
		printf("Value of y is %f \n",y);
	
	}
	else if(n==3)
	{
	
		y=1+x*x*x;
		printf("Value of y is %f \n",y);
	
	}
	else 
	{
	
		y=1+x*n;
		printf("Value of y is %f \n",y);
	
	}
}
