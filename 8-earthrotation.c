// this programe is designed to convert seconds in different scale of time

#include<stdio.h>
#include<conio.h>
void main()
{
	long int day,hours,minutes,seconds;
	printf("Earth takes a period of revolution of how many seconds? ");
	scanf("%d",&seconds);
	minutes=seconds/60;// To convert seconds into minutes
	hours=minutes/60;// To convert minutes into hours
	day=hours/24;// To convert hours into days
	printf("Earth takes a period of revolution in minutes,hours,day(respective)= %d,%d,%d",minutes,hours,day);

}
