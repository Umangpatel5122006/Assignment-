//This programe is designed to copy of an array using pointer
#include<stdio.h>
void main()
{
	int n;
	printf("Enter length of array");
	scanf("%d",&n);
	int *aptr,a[n],i,b[n];
	printf("Enter element of array");
	aptr=&a;
	for(i=0;i<n;i++)
	{
		scanf("%d",(aptr+i));
	}
	for(i=0;i<n;i++)
	{
		b[i]=*(aptr+i);//copy of array elements into another array
		printf("%d\t",b[i]);
	}	
}
