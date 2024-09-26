//This programe is designed to sum of elements of array 
#include<stdio.h>
void main()
{
	int a[10],sum=0,i=0;
	printf("Enter numbers \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
		
	}

	printf("\n %d",sum);
}
