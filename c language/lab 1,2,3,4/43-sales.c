//This programe is designed to show commission according to sales

#include<stdio.h>
void main()
{
	int sales,com;
	printf("Enter the value of sales :\n");
	scanf("%d",&sales);
	if(sales<=500)
	{
		com=sales*5/100;
		printf("Commission is %d \n",com);
	}
	if(sales>500 && sales<=2000)
	{
		com=35+(sales-500)*10/100;
		printf("Commission is %d \n",com);
	}
	if(sales>2000 && sales<=5000)
	{
		com=185+(sales-2000)*12/100;
		printf("Commission is %d \n",com);
	}
	if(sales>5000)
	{
		com=sales*12.5/100;
		printf("Commission is %d \n",com);
	}
}
