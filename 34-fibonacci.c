//This programe is designed to see fibonacci series upto 45 terms

#include<stdio.h>
void main()
{
	int a1=0,a2=0,a3=0,i=0,n=0;
	printf("Enter number to see fibonacci series to that terms \n");
	scanf("%d",&n);
	printf("Enter the number 0,1 to see fibonacci series \n");
	scanf("%d",&a1);
	scanf("%d",&a2);
	if(a1==0 && a2==1)
	{
	
    	while(i<n/3)
    	{
		a3=a2+a1;
		printf("%d \n",a3);
		a1=a3+a2;
		a2=a1+a3;
		printf("%d \n",a1);
		printf("%d \n",a2);
		i=i+1;
    	}
	}
    else
    {
    printf("You have not entered 0,1 \n");
    }
}
