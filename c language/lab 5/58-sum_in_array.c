//This programe is designed to doing addition in two arrays
#include<stdio.h>
void main()
{
	int a[10],b[10],c[10],i;
	printf("Enter A array numbers \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);		
	}
	printf("Enter B array numbers \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&b[i]);		
	}
	printf(" C array numbers is \n");
	for(i=0;i<10;i++)
	{
		c[i]=a[i]+b[i];
		printf("%d \t",c[i]);//to print sum of given two arrays		
	}
}
