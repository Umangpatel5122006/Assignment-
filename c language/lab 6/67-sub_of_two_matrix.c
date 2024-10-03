//This programe is designed to sub of given two array 
#include<stdio.h>
void main()
{
	int i,j;
	int a[3][3],b[3][3],c[3][3];
	printf("Enter terms in A array \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}	
	}
	printf("Your A array is\n");	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");	
	}
	printf("Enter terms in B array \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}	
	}
	printf("Your B array is\n");	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",b[i][j]);
		}
		printf("\n");	
	}
	printf("A-B array is\n");	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",a[i][j]-b[i][j]);
		}
		printf("\n");	
	}
}
