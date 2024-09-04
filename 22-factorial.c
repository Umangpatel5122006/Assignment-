//This programe is designed to calculate factorial of a number
# include<stdio.h>
# include<conio.h>
void main()
{
   int n,a,b,c,i;
   printf("Enter value of number ");
   scanf("%d",&n);
   if(n<=0)
   {
   	printf("Value of factorial is not possible");
   }
  else
   i=1;
   b=1;
   while(i<=n)
   {
   	 b=b*i;
	 i=i+1;	
   }
   printf("Value of factorial is %d",b);
}
