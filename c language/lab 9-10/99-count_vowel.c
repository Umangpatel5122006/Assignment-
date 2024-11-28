//This programe is designed TO READ THE TEXT FILE AND ALSO COUNT THE NUMBER OF VOWELS PRESENT IN THE FILE
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	FILE *fptr;
	fptr=fopen("E:\\word.txt","w");
	int count=0;
	char c;
	while((c=getchar())!='\n')
	{
		putc(c,fptr);
	}
	fclose(fptr);
	fptr=fopen("E:\\word.txt","r");	
	while(!feof(fptr))
	{
		c=getc(fptr);
		switch(tolower(c))
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':count++;
					 break;
				
		}
	}
	printf("vowel: %d",count);
	fclose(fptr);
}
