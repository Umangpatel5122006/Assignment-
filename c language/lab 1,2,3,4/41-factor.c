//This programe is designed to find factor of a givien number
#include<stdio.h>
void main()
{
	int n,q,sum=0;
    printf("Enter a number: \n");
    scanf("%d",&n);
    int i=2;
    printf("Factor is: \n");
    printf("1 ",i);


	while(i<=n)//n is divid by i and i is incresed by 1 
    {

    	if(n%i==0)
    	{
    		q=1;
    	    printf(", %d ",i);
		}	
		i=i+1;
	}

}
