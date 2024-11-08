#include<stdio.h>
void main()
{
	int t,i,j,k,count=0,q,num,original;
	printf("Enter total numbers \n");
	scanf("%d",&t);
	int series[t];
	printf("Enter numbers \n");
	
	for ( k = 0; k < t; k++)
	{
		scanf("%d",&series[k]);
	}
	printf("OUTPUT:");
	for(i=0;i<t;i++)
	{
		count = 0;
		original=series[i];
		num=series[i];
		while(num!=0)
		{
			q=num%10;
			if( q!=0 && original %q == 0)
			{
				count++;
			}
			num=num/10;
		}
		printf("\n%d",count);
	}
}
