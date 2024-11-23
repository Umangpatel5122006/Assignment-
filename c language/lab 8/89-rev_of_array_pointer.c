//This programe is designed TO COPY  ONE ARRAY INTO ANOTHER ARRAY .ORDER OF ELEMENTS OF SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAY
#include<stdio.h>
void main()
{
	int n;
	printf("Enter length of array");
	scanf("%d",&n);
	int *aptr,a[n],i,b[n];
	printf("Enter element of array");
	/*for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}*/
	aptr=&a;
	for(i=0;i<n;i++)
	{
		scanf("%d",(aptr+i));
	}
	for(i=0;i<n;i++)
	{
		b[n-1-i]=*(aptr+i);	
	}
	printf("\n Reverse of array is \n");

	for(i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	}	
}
