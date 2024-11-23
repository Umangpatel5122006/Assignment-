//This programe is designed TO FIND THE PRODUCT OF 2 MATRICES USING POINTER USING DYNAMIC MEMORY ALLOCATION
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	int n=0,i=0,j=0,k=0;
	printf("Enter value of n to do n*n matrix multiplication\n");
	scanf("%d",&n);
	int **a;
	int **b;
	int **c;
	a=(int **)malloc(n *sizeof(int *));
	for(i=0;i<n;i++)
	{
		a[i]=(int *)malloc(n*sizeof(int));
	}
	printf("Enter terms in A matrix \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}	
	}
	printf("Your A array is\n");	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");	
	}
	b=(int **)malloc(n *sizeof(int *));
	for(i=0;i<n;i++)
	{
		b[i]=(int *)malloc(n*sizeof(int));
	}
	printf("Enter terms in B matrix \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}	
	}
	printf("Your B array is\n");	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d \t",b[i][j]);
		}
		printf("\n");	
	}
	c=(int **)malloc(n *sizeof(int *));
	for(i=0;i<n;i++)
	{
		c[i]=(int *)malloc(n*sizeof(int));
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}			
		}
	}
	printf("Your A*B array is\n");	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d \t",c[i][j]);
		}
		printf("\n");	
	}
	for(i=0;i<n;i++)
	{
		free(a[i]);
	}
	for(i=0;i<n;i++)
	{
		free(b[i]);
	}
	for(i=0;i<n;i++)
	{
		free(c[i]);
	}
}
