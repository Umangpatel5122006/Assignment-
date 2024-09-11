// this programe is designed to display what you entered character,symbol or number
#include <stdio.h>
void main()
{
	char ch;
	printf("Enter a character/symbol/number: ");
	scanf("%c",&ch);
	printf("The ASCII value of %c is: %d\n" , ch,ch);
	if(ch<=90&&ch>=65)// If ASCII value is between this range than it must be  uppercase alphabet
	{
	printf("It is uppercase alphabet ");	
	}
	else if(ch<=122&&ch>=97)// If ASCII value is between this range than it must be  lowercase alphabet
	{
	printf("It is lowercase alphabet ");	
	}
	else if(ch<=57&&ch>=48)// If ASCII value is between this range than it must be number
	{
	printf("It is number ");	
	}
	else// If ASCII value is not in anyother range than it must be symbol
	{
	printf("It is symbol ");	
	}
}
