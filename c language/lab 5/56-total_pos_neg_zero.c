//This programe is designed to calculate total number of positive,negative,zeros in array

#include<stdio.h>
void main()
{
	int a[10],sum=0,i=0,j=0,k=0,q=0;
	printf("Enter numbers \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>0)
		{
			j=j+1;
		}
		else if(a[i]<0)
		{
			k=k+1;
		}
		else if(a[i]==0)
		{
			q=q+1;
		}	
	}

	printf("\n total positive numbers = %d",k);
	printf("\n total negative numbers = %d",j);
	printf("\n total zeros = %d",q);

}
