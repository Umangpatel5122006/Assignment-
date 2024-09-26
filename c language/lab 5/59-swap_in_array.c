//This programe is designed to swap elements in array to another array
#include<stdio.h>
void main()
{
	int a[10],b[10],c[10],i;
	printf("Enter A array numbers \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);		
	}
	printf("\n A array numbers is \n");
	for(i=0;i<10;i++)
	{
		printf("%d \t",a[i]);		
	}
	printf("Enter B array numbers \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&b[i]);		
	}
	printf("A array numbers is \n");
	for(i=0;i<10;i++)
	{
		printf("%d \t",a[i]);		
	}
	printf("\n B array numbers is \n");
	for(i=0;i<10;i++)
	{
		printf("%d \t",b[i]);		
	}
	for(i=0;i<10;i++)//swapping elements in two arrays using third array
	{
		c[i]=a[i];
		a[i]=b[i];
		b[i]=c[i];			
	}
	printf("\n B array numbers is \n");
	for(i=0;i<10;i++)
	{
		printf("%d \t",b[i]);		
	}
}
