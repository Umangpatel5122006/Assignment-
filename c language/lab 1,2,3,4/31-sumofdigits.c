//This programe is designed to calculate sum of digit of any givien number
#include<stdio.h>
void main()
{
	int n,q,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
    	q=n%10;
    	sum=sum+q;
    	n=n/10;
	}
    printf("Sum of digits = %d",sum);

}

