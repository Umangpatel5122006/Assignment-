//This programe is designed to count square and cube of a number
#include<stdio.h>
#include<string.h>
void main()
{
	int *ptr,n=0,p=0;
	ptr=&n;
	printf("Enter a number\n");
	scanf("%d",ptr);
	p=(*ptr);
	*ptr=(*ptr)*(*ptr);
	printf("square of a number is %d\n",*ptr);
	*ptr=(p)*(*ptr);
	printf("Cube of a number is %d\n",*ptr);
	
}
