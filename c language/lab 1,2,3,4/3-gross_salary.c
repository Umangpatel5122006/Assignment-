// this programe is designed to calculate Gross Salary

#include<stdio.h>
# include<conio.h>
void main()
{
   int grosssalary,perpiece,totalcost,totalrevenue,totalpiece;
   printf("\n Enter per piece cost ");
   scanf("%d",&perpiece);// to read per piece cost
   printf("\n Enter total piece sold ");
   scanf("%d",&totalpiece);// to read total piece sold by company
   totalcost=perpiece*totalpiece;
   printf("\n Enter total revenue ");
   scanf("%d",&totalrevenue);//to read total money got by company after selling their products
   grosssalary=totalrevenue-totalcost;
   printf("gross salary = %d",grosssalary);
   

}
