//This programe is designed to show how many even and odd elements present in array
#include<stdio.h>
void main()
{
	int a[10],sum=0,i=0,j=0,k=0;
	printf("Enter numbers \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			j=j+1;
		}
		else 
		{
			k=k+1;
		}
	}

	printf("\n total odd numbers = %d",k);
	printf("\n total even numbers = %d",j);
	

}
