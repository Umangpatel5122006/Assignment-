
//this programe is desigined to calculate sum of 5 numbers and their persantage 

# include<stdio.h>
# include<conio.h>
void main()
{
   float a,b,c,d,e,sum,percentage;
   printf("Enter marks of 5 subjects out of 100\n");
   scanf("%f%f%f%f%f",&a,&b,&c,&d,&e); // to read value of 5 numbers which is out of 100
   if (a>100 || b>100 ||  c>100 || d>100 || e>100) // if any marks are greater than 100 than it will not valid
   {	
   		printf("Entered marks are invalid \n");
   		printf("Marks must between 0 to 100 \n");
   }
   else
   { 
   sum=a+b+c+d+e;
   percentage=sum/5;
   printf("sum = %f \n",sum);
   printf ("percentage = %f",percentage);
   }
}
