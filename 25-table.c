//This programe is designed to make table of a givien number

#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("Enter a number to see its table \n");
	scanf("%d",&num);
	int i=1;
	while(i<=10)
	{
		printf("%d * %d = %d \n",num,i,num*i);
		i++;
	}
	
}
