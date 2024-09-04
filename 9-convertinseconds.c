// this programe is designed to convert different scale of time into total seconds

#include<stdio.h>
#include<conio.h>
void main()
{
	long int hours,minutes,seconds;
	printf("Enter minutes \n");
	scanf("%d",&minutes);
	printf("Enter hours \n");
	scanf("%d",&hours);
	seconds=(minutes*60)+(hours*3600);//To convert minutes,hours into seconds
	printf("Total seconds is %d",seconds);

}
