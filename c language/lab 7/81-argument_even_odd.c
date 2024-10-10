//This programe is designed to check whether entered number is prime or not prime
#include <stdio.h>
int check(int);
void main()
{
	int n;
	printf("Enter value of argument \n");
	scanf("%d",&n);
	check(n);
}
int check(int n)
{
	int i=2,q=0;
    while(i<n)//n is divid by i and i is incresed by 1 
    {
    	if(n%i==0)
    	{
    		q=1;
    		break;
		}
		i=i+1;
	}
	if(n==1)//1 have no factors other than itself so it is not a prime number
	{
		printf("1 is not prime number \n");

	}
    else if(q==1)//if number have more than two factor than it is not a prime number
    {
    	
    	printf("%d is composite number \n",n);
    	return 0;
	}
	else
	{
		
		printf("%d is prime number \n",n);
		return 1;
	}

}
