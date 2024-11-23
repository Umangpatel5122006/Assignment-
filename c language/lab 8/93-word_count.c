//This programe is designed to TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING. 
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i=0,l=0,count=0;
	char s1[1000],word[1000],*cptr,*lptr;
	printf("Enter text\n");
	gets(s1);
	cptr=&s1;
	lptr=&s1;
	while(*lptr!='\0')
	{
		
		lptr++;
		l=l+1;
	
	}
    for(i=0; i<l && *cptr!='\0'; i++)
    {
	
		if(*cptr==' ')
		{
			cptr++;
			count++;
		}
		else
		{
			cptr++;	
		}
		
	}
	printf("Enter total word %d\n",(count+1));
	
}
