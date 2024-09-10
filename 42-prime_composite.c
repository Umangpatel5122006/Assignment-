//This programe is designed to check whether entered number is prime or composite

#include<stdio.h>
void main()
{
	int n,flag=1,b=2;
	printf("Enter number \n");
	scanf("%d",&n);
	if(n==1)//1 have no factors other than itself so it is not a prime number
	{
		printf("1 is not prime number \n");

	}
	else
	{
	
		while(b<=n/2 && flag==1)
		{
	 		if(n%b==0)
	 	{
	 		flag=0;
		}
		b=b+1;
		}
		if(flag==1)
		{
		 	printf("%d is prime number \n",n);
		}
		else
		{
			printf("%d is Composite number \n",n);
		}
	}
}
