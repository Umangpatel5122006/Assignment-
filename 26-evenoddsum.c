//This programe is designed to calculate sum of odd and even numbers

#include<stdio.h>
void main()
{
 int s_odd=0,s_even=0,n;
 int i=1;
 printf("Enter a number \n");
 scanf("%d",&n);
 while(i<=n)
  {
 	if(i%2==0)
 	{
 		s_even=s_even+i;//sum of even numbers
	}
	else
	{
		s_odd=s_odd+i;//sum of odd numbers
	}
	i=i+1;
  }
  printf("Even number sum = %d \n",s_even);
  printf("Odd number sum = %d \n",s_odd);
} 
