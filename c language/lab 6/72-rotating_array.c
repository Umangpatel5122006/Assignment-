//This programe is designed to rearrange array element according to user input
#include<stdio.h>
#include<conio.h>
void main()
{

	int n=0,i=0,j=0,r;
	printf("Enter value of array \n");
	scanf("%d",&n);
	int a[n],b[n];
	printf("Enter terms in array \n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);	
	}
	printf("Your array is\n");	
	
	for(i=0;i<n;i++)//printing of array
	{
	printf("%d \t",a[i]);	
	}
	printf("\n");
	printf("Enter rotation value of array \n");
	scanf("%d",&r);
	for(j=0;j<2;j++)//to execute if satement in every rotation value 
	{
		if(r<=n)
		{
			for(i=0;i<n && i+r<=n;i++)
			{
				b[i+r]=a[i];//fillup values of array B by rearrange array A
			}
			for(i=0;i<n;i++)
			{
				if(i+r>=n)
				{
					b[i+r-n]=a[i];
				}	
			}
		}
		else
		{
			r=r%n;
		}
	}
	printf("Rotated array is  \n");
	for(i=0;i<n;i++)
	{
	printf("%d \t",b[i]);	
	}
}
	
	
	
	
	
	
	
	
