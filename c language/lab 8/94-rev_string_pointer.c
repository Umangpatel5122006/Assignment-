//This programe is designed TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING POINTERS
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char w1[1000],w2[1000],*ptr1,*ptr2;
	int l=0,i=0;
	printf("Enter word\n");
	gets(w1);
	ptr1=&w1;
	while(*ptr1!='\0')//to count length of word
	{	
		ptr1++;
		l=l+1;
	}
	ptr2=&w1[l-1];//to store address of w1 
	while(*ptr2!=w1[0])
	{
		w2[i]=*ptr2;
		i++;
		ptr2--;
	}
	w2[l-1]=w1[0];//to store first character of w1
	w2[l]='\0';//to terminate the string
	puts(w2);// to print w2;
}

