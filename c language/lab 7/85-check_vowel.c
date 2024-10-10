//This programe is designed to check entered character is vowel or not 
#include<stdio.h>
void read();
void main()
{
	read();
}
void read()
{
	int zx=1;
	char q,a,e,i,o,u,A,E,I,U,O;
	printf("Enter a character \n");

		q=getchar();
		if(q=='a' || q=='e' || q=='i' || q=='o' || q=='u' || q=='A' || q=='E' || q=='O' || q=='I' || q=='U')
		{
		
		/*switch(q)
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
		case 'U': 
		*/		
				 printf("\nEntered character is vowel\n");
				
			
		}
		else
			 printf("\nEntered character is not vowel\n");

		
		
	
	}

