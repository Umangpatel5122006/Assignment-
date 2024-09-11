// this programe is designed to calculate Simple Intrest 

# include<stdio.h>
# include<conio.h>
void main()
{
   int si,p,r,t;
   printf("Enter value of Principal \n");
   scanf("%d",&p);
   printf("Enter value of Rate of Interest \n");
   scanf("%d",&r);
   printf("Enter value of Time period (in year) \n");
   scanf("%d",&t);
   si=p*r*t; //si is calculating simple intrest using no. of year(non leap year)
   printf("Value of Simple Interest is = %d \n",si);


}    
