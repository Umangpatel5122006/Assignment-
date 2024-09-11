// this programe is designed to give biggest number in all three number using logical opretor

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter value of a,b,c \n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
	  printf("Max number is %d ",a);	
	}
	if(b>a && b>c)
	{
	  printf("Max number is %d ",b);	
	}
	if(c>a && c>a)
	{
	  printf("Max number is %d ",c);	
	}
	
	
}
