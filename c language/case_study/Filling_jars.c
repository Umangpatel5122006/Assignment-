#include<stdio.h>
void main()
{
	int n,i,j,m,u,l,a,sum,avg;
	printf("Enter number of jars and operations \n");
	scanf("%d %d",&n,&m);
	int box[n];
	if(n<3)
	{
		printf("Number of jar must be greater than 2 \n");		
	}
	else
	{
	
		for(i=0;i<n;i++)
		{
			box[i]=0;
		}
		printf("Enter lower and upper range and amount with single space between them \n");
		for(j=0;j<m;j++)
		{
			scanf("%d %d %d",&u,&l,&a);
			for(i=u-1;i<=l-1;i++)
			{
				box[i]=box[i]+a;
			}
		}
		for(i=0;i<n;i++)
		{
			sum=sum+box[i];
		}
		avg=sum/n;
		printf("%d",avg);
	}
}
	
