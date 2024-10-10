//This programe is designed to show annual number is even or odd using function
#include<stdio.h>
int check();
void main()
{
	int a,flag,m;
	printf("Enter a number \n");	
	scanf("%d",&a);
	m=check(a);
	if(m==1)
	{
		printf("even");
	}
	else
	{
	 printf("odd");
	}
}
int check(int a)
{
	int flag=0;
    if(a%2==0)
	{
		flag=1;
	}
	return(flag);	
}
