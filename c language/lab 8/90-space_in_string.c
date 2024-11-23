//This programe is designed to count length of text including and excluding spaces
#include<stdio.h>
#include<string.h>
void main()
{
	int i=0,*ptr,l=0,count=0,*sptr;
	char s1[1000],*lptr;
	printf("\n Enter text \n");
	ptr=&l;
	sptr=&count;
	gets(s1);
	lptr=&s1;
	while(*lptr!='\0')
	{
		
		lptr++;
		l=l+1;
	
	}
	
	for(i=0;i<l;i++)
	{
		if(s1[i]==' ')
		{
			count++;
		}
		continue;
	}
	
	printf("\n length of text including spaces %d\n",*ptr);
	*ptr=*ptr-*sptr;
	printf("\n length of text excluding spaces %d\n",*ptr);
	
}
