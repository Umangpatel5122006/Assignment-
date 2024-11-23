//This programe is designed TO COUNT THE NUMBER OF VOWELS IN A STRING USING POINTER. 
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i=0,l=0,count=0;
	char name[1000];
	char *sptr;
	printf("Enter name \n");
	gets(name);
	l=strlen(name);
	sptr=&name;
	for(i=0;i<l;i++)
	{
		switch(*sptr)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':count++;
		}
		sptr++;
	}
	printf("Total vowel in string is %d\n",count);
}
