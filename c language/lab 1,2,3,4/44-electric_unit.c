//This programe is designed to show electric distribution according to unit used

#include<stdio.h>
void main()
{
	float amount,unit;
	printf("Enter the value of sales :\n");
	scanf("%f",&unit);
	if(unit<=200)
	{
		amount=unit*0.5;
		printf("amount is %f \n",amount);
	}
	if(unit>=210 && unit<=400)
	{
		amount=100+(unit-200)*0.65;
		printf("amount is %f \n",amount);	
	}
	if(unit>=401 && unit<=600)
	{
		amount=230+(unit-400)*0.8;
		printf("amount is %f \n",amount);
	}
	if(unit>600)
	{
		amount=425+(unit-600)*1.25;
		printf("amount is %f \n",amount);
	}
}
