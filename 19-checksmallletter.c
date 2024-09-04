// this programe is designed to check weather entered letter is lower case or not
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a character \n");
	scanf("%c",&ch);
	(ch>='a' && ch<='z')?printf("%c is a small case letter  \n",ch):printf("%c is not a small case letter  \n",ch);
}
