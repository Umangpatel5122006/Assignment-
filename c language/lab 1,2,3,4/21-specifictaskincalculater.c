//This programe is designed to do basic mathematical oprations like addition,multiplication,division,subtraction
#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,sum,mul,sub,div;
	int v;
	printf("Enter a and b\n");
	scanf("%f%f",&a,&b);
	printf("Enter 1 to perform addition \n");
	printf("Enter 2 to perform multiplication \n");
	printf("Enter 3 to perform division \n");
	printf("Enter 4 to perform subtraction \n");
	scanf("%d",&v);
		switch(v)
	{
		case 1://User wants to do addition
		   sum=a+b;
           printf("sum a+b = %f\n",sum);
		   break;
		case 2://User wants to do multiplication
   			mul=a*b;
   			printf("multiplication a*b= %f\n",mul);
			break;
		case 3://User wants to do division
			
   			if(b==0)
   			{
   				printf("division a/b is not possible\n");//division by zero is not possible
			}
   			else
			{
			div=a/b;
   			printf("division a/b = %f \n",div);
   		    }
			break;	
		case 4://User wants to do subtraction
			
   			sub=a-b;
   			printf("Subtraction a-b = %f\n",sub);
			break;
	}
}
		
