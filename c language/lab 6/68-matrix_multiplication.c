//This programe is designed to multiply of given two array 
#include<stdio.h>
void main()
{
	int i,j,k;
	int a[3][3],b[3][3],result[3][3];
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
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			result[i][j]=0;
			for(k=0;k<3;k++)
			{
				result[i][j]=result[i][j]+a[i][k]*b[k][j];
			}
			
		}
	}
	printf("multiplied array is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",result[i][j]);
		}
		printf("\n");	
	}
}
