//This programe is designed to display information about book
#include<stdio.h>
#include<string.h>

void main()
{
	int p,y;
	char bname[50],aname[50];
	printf("Enter book name\n");
	gets(bname);
	printf("Enter authors name\n");
	gets(aname);
	printf("Enter book price\n");
	scanf("%d",&p);
	printf("Enter book issue year\n");
	scanf("%d",&y);
	printf("\n");
	printf("Book : %s \nAuthor: %s\nPrice: %d\nIssuing year: %d\n ",bname,aname,p,y);

}
