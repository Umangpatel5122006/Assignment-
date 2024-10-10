 /*This programe is designed to calculate NCR acco. to below formula
   nCr=    n!
       ---------
       r!*(n-r)!
 */
# include<stdio.h>
# include<conio.h>
int factorial(int);
void main()
{
   int n,r,p,q,z,a;
   printf("Enter value of number of n and r to calculate NCR \n");
   scanf("%d%d",&n,&r);
   if(n-r<0)
   {
   	printf("Value of NCR is not possible");
   }
   else
   {
   p=factorial(n);
   q=factorial(r);
   r=factorial(n-r);
   z=q*r;
   printf("\n NCR=%d/%d",p,z);
   }
}
int factorial(int n)
{
	int b=0,i=0;
   i=1;
   b=1;
   while(i<=n)
   {
   	 b=b*i;
	 i=i+1;	
   }
   return b;
}
