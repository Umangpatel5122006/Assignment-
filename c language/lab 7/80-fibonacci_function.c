//This programe is designed to see fibonacci series using function
#include<stdio.h>
int fibonacci(float);
void main()
{
	
	float n;
	
	printf("Enter total terms in series (more than 2 ) \n");
	scanf("%f \n",&n);
	fibonacci(n); 	
}
int fibonacci(float n)
{
	int i=0,a1=0,a2=1,a3,p;
	p=n/3;
	{
		while(i<p)
    	{
    	if(i==0)
    	{
			printf("%d \n",a1);
			printf("%d \n",a2);
		}
		a3=a2+a1;
		printf("%d \n",a3);
		a1=a3+a2;
		a2=a1+a3;
		printf("%d \n",a1);
		printf("%d \n",a2);
		i=i+1;
    	}
}
}
