//This programe is designed to check weather number is armstrong
#include<stdio.h>
void main()
{
	int n,q,b,c,sum;
	printf("Enter a number ");
	scanf("%d",&n);
	b=n;
	sum=0;
	while(n>0)
	{
		q=n%10;
		sum=sum+q*q*q;
		n=n/10;
	}
	if(b==sum)
	printf("Number is Armstrong");
	else
	printf("Number is not Armstrong");
}
