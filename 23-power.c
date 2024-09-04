//This programe is designed to calculate power of any number 
#include<stdio.h>
void main()
{
	float i=1,a,b,res=1;
	printf("Enter base and power: \n");
	scanf("%f%f",&a,&b);
	
	while(i<=b)//Value of i should be less than value of base     
	{
		res*=a;
		i=i+1;
	}
   	printf("Answer: %f \n",res);
  	 
}
