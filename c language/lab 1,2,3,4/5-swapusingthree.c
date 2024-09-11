// this programe is designed to interchange value of two variable using third variable

#include<stdio.h>
# include<conio.h>
void main()
{
   int a,b,c;
   printf("Enter a,b \n");
   scanf("%d%d",&a,&b);
   c=a;
   a=b;
   b=c;
   
   printf("a = %d \n",a);
   printf("b = %d",b);


}
