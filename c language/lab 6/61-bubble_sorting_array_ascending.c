//This programe is designed to arrange in ascending array
#include<stdio.h>
#include<conio.h>
void main()
{
	int n=0,max=0,smax=0,i=0,j=0;
	printf("Enter value of array \n");
	scanf("%d",&n);// to find size of array
	int a[n];
	printf("Enter terms in array \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	printf("Your array is\n");	
	for(i=0;i<n;i++)
	{
		printf("%d \t",a[i]);	
	}
	printf("\n");
	for(j=0;j<n;j++)//to run loop n time for sorting
	{
		for(i=0;i<n-j;i++)
		{
			if(a[i]>a[i+1])//comparing two neighbouring element
			{
				a[i]=a[i]+a[i+1];
				a[i+1]=a[i]-a[i+1];
				a[i]=a[i]-a[i+1];
			}		
		}
	}
	printf("\n ascending array is \n");
	for(i=0;i<n;i++)
	{
		printf("%d \t",a[i]);	
	}
}

	
