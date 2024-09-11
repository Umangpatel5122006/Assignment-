//This programe is designed to show series which is like this 1,4,9,16,25...
#include<stdio.h>
void main()
{
	int n,a=1,d=3;
	int i=0;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    printf("First term of given series is 1 \n");

    while(i<=n)
    {
        printf("%d \n",a);
    	a=a+d;
    	d=d+2;
        i=i+1;

	}

}

