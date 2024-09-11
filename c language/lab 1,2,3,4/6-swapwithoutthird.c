// this programe is designed to interchange value of two variable without using third variable

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter value of a,b \n");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n Value of a is %d and value of b is %d ",a,b);
}
