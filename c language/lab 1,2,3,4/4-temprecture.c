// this programe is designed to convert fahrenheit to centigrade

#include<stdio.h>
# include<conio.h>
void main()
{
   int fahrenheit,centigrade;
   printf("Enter temprecture in fahrenheit ");
   scanf("%d",&fahrenheit);
   centigrade=(fahrenheit-32)*5/9;// Conversion of fahrenheit to centigrade
   printf("centigrade = %d",centigrade);


}
