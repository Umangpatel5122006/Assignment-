//This programe is designed to find transpose of array
#include<stdio.h>
void main()
{
	int i,j,max,min;
	int a[3][3];
	printf("Enter terms in array \n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}	
	}
	printf("Your array is\n");	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");	
	}
	
	printf("Transpose of array is\n");	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",a[j][i]);
		}
		printf("\n");	
	}
}
