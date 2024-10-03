//This programe is designed to find max. and min. numbers in array
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
	max=a[0][0];
	min=a[0][0];
	for(i=0;i<3;i++)//to find max. number in array
	{
		for(j=0;j<3;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
			}
		}	
	}
	for(i=0;i<3;i++)//to find min. number in array
	{
		for(j=0;j<3;j++)
		{
			if(min>a[i][j])
			{
				min=a[i][j];
			}
		}	
	}
	printf("Max. in array is %d \n",max);	
	printf("Min. in array is %d \n",min);	
}
