//This programe is designed to show sum of all positive number entered
#include<stdio.h>
void main()
{
	int n,sum=0,i=1;
	printf("Enter the numbers \n");
	while(1)
	{
		scanf("%d",&n);
		if(n<0)//applicable if any negative number is entered
		{
			break;
		}
		sum=sum+n;
	}
	printf("Sum of all positive numbers is %d \n",sum);
}
