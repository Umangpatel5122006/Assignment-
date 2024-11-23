//This programe is designed TO SORT THE GIVEN N NUMBER OF STRINGS IN ASCENDING ORDER USING POINTERS. 
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct info
{
		char name[1000];	
};
void main()
{
	
	int n=0,i=0,j=0;
	printf("Enter total number of strings \n");
	scanf("%d",&n);
	struct info std[n];
	
	printf("Enter student names ");
	for(i=0;i<n+1;i++)
	{
		struct info *sname;
		sname=&std[i];
		gets(sname->name);
	}

	for(i=0;i<n+1;i++)
	{
		for(j=i+1;j<n+1;j++)
		{
			if(strcmp(std[i].name,std[j].name)>0)
			{
				char temp[500];
				strcpy(temp,std[i].name);
				strcpy(std[i].name,std[j].name);
				strcpy(std[j].name,temp);
			}
		}
	}
	printf("\n Sorted list \n");
	for(i=0;i<n+1;i++)
	{
		puts(std[i].name);
	}
}
