// this programe is designed to calculate cutoff marks of a student

# include<stdio.h>
# include<conio.h>
void main()
{
   int m,p,c,e,cm;
   printf("Enter marks in entrance examination out of 100 \n");
   scanf("%d",&e);
   printf("Enter marks in mathematics out of 200 \n");
   scanf("%d",&m); 
   printf("Enter marks in physics out of 200 \n");
   scanf("%d",&p); 
   printf("Enter marks in chemistry out of 200 \n");
   scanf("%d",&c);
   if(e>100 || m>200 || p>200 || c>200 )
   {
   		printf("Entered marks are invalid \n");
   		
   }
   else
   {
   cm=(m+p+c)/2+e;//calculating cutoff marks by givien formula
   printf("Your cut off marks is = %d \n",cm);
   }

}
