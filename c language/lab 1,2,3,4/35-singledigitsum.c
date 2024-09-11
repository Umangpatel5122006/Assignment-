//This programe is designed to calculate sum of digits and show it in one digit

#include<stdio.h>
void main()
{
	int n,q,sum=0,a,dsum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
    	q=n%10;
    	sum=sum+q;
    	n=n/10;
	}
    
    while(sum>0)//if sum is more than one digit number than it will show it in one digit number
    {
    	a=sum%10;
    	dsum=dsum+a;
    	sum=sum/10;
	}
    printf("Sum digit = %d",dsum);

}

