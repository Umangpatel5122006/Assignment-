//This programe is designed to search a number in 2D array
#include<stdio.h>
void main()
{
	int i,j,p,m,n,flag=0;
	printf("Enter rows and columns in array \n");
	scanf("%d%d",&m,&n);
	int a[m][n];
	printf("Enter terms in A array \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}	
	}
	printf("Your A array is\n");	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");	
	}
	printf("Enter a number \n");
	scanf("%d",&p);	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==p && flag==0)
			{
				flag=1;
			}
		}	
	}	
	if(flag==1)
	{
		printf("Entered number is in array \n");	
	}
	else
	{
		printf("Entered number is not in array \n");

	}
	
	
}
