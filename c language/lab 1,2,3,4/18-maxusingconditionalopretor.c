// this programe is designed to give biggest number in all three number using ternary conditional opretar

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter value of a,b,c \n");
	scanf("%d%d%d",&a,&b,&c);
	int max=(a>b)?((a>c)?a:c):((b>c)?b:c);// checking condition between three number
	printf("Max number is %d ",max);
}
