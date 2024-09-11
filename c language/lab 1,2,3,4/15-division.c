//this programe is desigined to dividing students in 6 different division
# include<stdio.h>
# include<conio.h>
void main()
{
   int a,b,c,d,e,sum,percentage;
   printf("Enter marks of 5 subjects out of 100\n");
   scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
   sum=a+b+c+d+e;
   percentage=sum/5;
   if(percentage>100)
   {
   		printf("Entered marks are invalid \n");
   }
   else//bifurcate student by their marks and percentage
   {
   
   	printf ("percentage = %d \n",percentage);
   	if(percentage<=100 && percentage>90)
   	 {
   		printf("Your division is A ");
   	 }
   	else if(percentage<=90 && percentage>80)
   	 {
   		printf("Your division is B ");
   	 }
   	else if(percentage<=70 && percentage>60)
   	 {
   		printf("Your division is C ");
   	 }
   	else if(percentage<=60 && percentage>50)
   	 {
   		printf("Your division is D ");
   	 }
   	else if(percentage<=50 && percentage>40)
   	 {
   		printf("Your division is E ");
   	 }
    else
   	 {
   		printf("You Failed in exam \n ");
   	 }
    }
}
