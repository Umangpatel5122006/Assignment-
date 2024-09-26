//This programe is designed to find max. and second max. numbers in array

#include<stdio.h>
#include<conio.h>
void main()
{

	int n=0,max=0,smax=0,i=0,j=0;
	printf("Enter value of array \n");
	scanf("%d",&n);
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
	max=a[0];
	smax=0;
	for(i=0;i<n;i++)//to find max. number in array
	{
		if(a[i]>max)
			{
				max=a[i];
			}	
	}
	for(j=0;j<n;j++)// to find second max. number in array
	{
		if(a[j]>smax && a[j]<max)
		{
			smax=a[j];
		}
	}
	printf("Max. in array is %d \n",max);	
	printf("Second max. in array is %d \n",smax);	
	

}
