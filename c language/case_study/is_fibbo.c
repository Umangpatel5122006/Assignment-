#include<stdio.h>
int fibo(int);
void main()
{
	int i=0,flag=0,n,q;
	
	printf("how many termsyou want to check \n");
	scanf("%d",&q);
	int a[q];
	printf("Enter number to check in fibonacci series \n");
	for(i=0;i<q;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<q;i++)
	{
		if(fibo(a[i]))
		{
			printf("Fibo\n");
		}
		else
		{
			printf("NotFibo\n");
		}
	}
	
 	
}
int fibo(int n)
{
	int a1=0,a2=1,next;
	while(a2<n)
	{
		next=a1+a2;
		a1=a2;
		a2=next;
	}
	if(a2==n)
	{
		return 1;//printf("%d number is in fibbo. \n",n);	
	}
	else
	{
		return 0;//printf("%d number is not in fibbo. \n",n);	
	}
}
