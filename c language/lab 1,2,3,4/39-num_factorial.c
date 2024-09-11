//This programe is designed to show number divided by its factorial 
# include<stdio.h>
# include<conio.h>
void main()
{
   int n,a,b=1,c,i,u;
   printf("Enter terms of series ");
   scanf("%d",&n);
   printf(" 0 ");	

   while(i<=n)
   {
   		printf("+ %d/%d ",i,b);	
   		i=i+1;

		if(i<=0)
   			{
   				printf("Value of factorial is not possible");
   			}
  		else//this condition is to calculate factorial of a number
  			 u=1;
  			 b=1;
  		 while(u<=i)
   			{
   				 b=b*u;
				 u=u+1;	
   			}
   	
   	
	}
}
