// this programe is designed to calculate Gross Income

#include<stdio.h>
# include<conio.h>
void main()
{
   int grossincome,perpiece,totalcost,totalrevenue,totalpiece;
   printf("\n Enter per piece cost ");
   scanf("%d",&perpiece);// to read per piece cost
   printf("\n Enter total piece sold ");
   scanf("%d",&totalpiece);// to read total piece sold by company
   totalcost=perpiece*totalpiece;
   printf("\n Enter total revenue ");
   scanf("%d",&totalrevenue);//to read total money got by company after selling their products
   grossincome=totalrevenue-totalcost;
   printf("gross income = %d",grossincome);
   

}
