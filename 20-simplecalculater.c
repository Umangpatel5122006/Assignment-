//This programe is designed to do basic mathematical oprations like addition,multiplication,division,subtraction
#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,sum,mul,sub,div;
	int v;
	printf("Enter 1 to perform addition \n");
	printf("Enter 2 to perform multiplication \n");
	printf("Enter 3 to perform division \n");
	printf("Enter 4 to perform subtraction \n");
	scanf("%d",&v);
	switch(v)
	{
		case 1://User wants to do addition
			
           
           printf("Enter a,b\n");
      	   scanf("%f%f",&a,&b);
   		   sum=a+b;
           printf("sum a+b= %f\n",sum);
		   break;
		case 2://User wants to do multiplication
			
            printf("Enter a,b");
   			scanf("%f%f",&a,&b);
   			mul=a*b;
   			printf("multiplication a*b= %f\n",mul);
			break;
		case 3://User wants to do division
			
            printf("Enter a,b\n");
   			scanf("%f%f",&a,&b);
   			if(b==0)
   			{
   				printf("division not possible\n");//division by zero is not possible
			}
   			else
			{
			div=a/b;
   			printf("division a/b = %f \n",div);
   		    }
			break;	
		case 4://User wants to do subtraction
			
			
            printf("Enter a,b\n");
   			scanf("%f%f",&a,&b);
   			sub=a-b;
   			printf("Subtraction a-b = %f\n",sub);
			break;
		
	}	
}
