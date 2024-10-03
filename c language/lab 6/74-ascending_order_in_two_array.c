//This programe is designed to arrange in ascending array of combination of two array

#include<stdio.h>
void main()
{
	int i,j,n,m;
	printf("Enter size of A and B array \n");
	scanf("%d%d",&n,&m);
	int a[n],b[m],c[n+m],d[n+m];
	printf("Enter terms in A array \n");
	for(i=0;i<n;i++)
	{
			scanf("%d",&a[i]);	
	}
	printf("Your A array is\n");	
	for(i=0;i<n;i++)
		{
			printf("%d \t",a[i]);
		}
	printf("\n");	
	printf("Enter terms in B array \n");
	for(i=0;i<m;i++)
	{
			scanf("%d",&b[i]);	
	}
	printf("Your B array is\n");	
	for(i=0;i<m;i++)
		{
			printf("%d \t",b[i]);
		}
	printf("\n");	
	for(i=0;i<n;i++)
	{
		c[i]=a[i];		
	}
	for(i=n;i<m+n;i++)
	{
		c[i]=b[i-n];		
	}
	for(j=0;j<n+m;j++)//to run loop n time for sorting
	{
		for(i=0;i<m+n-j;i++)
		{
			if(c[i]>c[i+1])
			{
				c[i]=c[i]+c[i+1];
				c[i+1]=c[i]-c[i+1];
				c[i]=c[i]-c[i+1];
			}		
		}
	}
	printf("\n ascending array is \n");
	for(i=0;i<n+m;i++)
	{
		printf("%d \t",c[i]);	
	}
}
	
	
	
