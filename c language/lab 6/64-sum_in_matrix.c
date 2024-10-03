//This programe is designed to show sum of all elements of same row
#include<stdio.h>
void main()
{
	int i,j,r1,r2,r3;
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
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==0)
			{
				r1=r1+a[i][j];
			}
			if(i==1)
			{
				r2=r2+a[i][j];
			}
			if(i==2)
			{
				r3=r3+a[i][j];
			}	
		}	
	}
	printf("sum of elements in 1st row is %d \n",r1);	
	printf("sum of elements in 2nd row is %d \n",r2);
	printf("sum of elements in 3rd row is %d \n",r3);	
	

	
}
	
