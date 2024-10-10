//This programe is designed to find max. number in array using function
#include<stdio.h>
#include<conio.h>
void check(int a[],int n);
void main()
{

	int n=0,max=0,i=0,j=0;
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
	check(a,n);		
}
void check( int a[],int n)
{
	int max=0,i=0;
	max=a[0];
	for(i=0;i<n;i++)//to find max. number in array
	{
		if(a[i]>max)
			{
				max=a[i];
			}	
	}
	printf("\n Max. in array is %d \n",max);

}
