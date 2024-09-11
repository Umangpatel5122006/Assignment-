// this programe is designed to convert total seconds into different scales of time 

#include<stdio.h>
#include<conio.h>
void main()
{
	int t,m,n,h,i,s;
	printf("Enter total seconds \n");
	scanf("%d",&t);
	if(t<60)//Apllicable when entered total seconds is less than 1 minute
	{
		printf("time is %d seconds \n",t);
	}
	
	if(t>=3600)//Apllicable when entered total seconds is greater than 1 hour
	{
		h=t/3600;
		printf("time is %d hours ",h);
		i=t-3600*h;
	  	if(i>=60&&i<3600)//Apllicable when remaining time is convertable in minutes
			{
			m=i/60;
			printf("%d minutes ",m);	
			}
		if(i<60)//Apllicable when remaining time is convertable in seconds
		{
			printf("%d seconds ",i);
		}
		else 
		{
		    s=i-60*m;
			printf("%d seconds ",s);
   	 	}
	}
	if(t<3600 && t>60)//Apllicable when entered total seconds is less than 1 hour but greater than 1 minute
	{
		m=t/60;
		s=t-60*m;
		printf("%d minutes ",m);
		printf("%d seconds ",s);
	}
	   
		
	
}
