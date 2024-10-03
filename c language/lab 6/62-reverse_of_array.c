//This programe is designed to reverse of array elements using another array
#include<stdio.h>
void main()
{
	int n=0;
	printf("Enter total array terms \n");
	scanf("%d",&n);
	int a[n],b[n],i;
	printf("Enter Array numbers \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);		
	}
	printf("\n Array numbers is \n");
	for(i=0;i<n;i++)
	{
		printf("%d \t",a[i]);		
	}
	for(i=0;i<n;i++)
	{
		b[n-1-i]=a[i];		
	}
	printf("\n Revers array numbers is \n");
	for(i=0;i<n;i++)
	{
		printf("%d \t",b[i]);		
	}
}
