/*This programe is designed TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER EMPLOYEE NAME AND BASIC PAY OF THE EMPLOYEE.
DECLARE  A STRUCTURE POINTER AND AN 
ARRAY EMPLOY WITH 50 ELEMENTS */
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct information
{
	int num;
	char name[50];
	float pay;
	
};
void main()
{
	int n=0,i=0;
	printf("Enter total number of employee \n");
	scanf("%d",&n);
	struct information employee[n];
	for(i=0;i<n;i++)
	{
		struct information *ptr;
		ptr=&employee[i];
		printf(" Enter employee number\n");
		scanf("%d",&ptr->num);
		printf(" Enter employee name\n");
		scanf("%s",&ptr->name);
		printf(" Enter employee basic pay\n");
		scanf("%f",&ptr->pay);
	}
	for(i=0;i<n;i++)
	{
		printf("\n Employee name: %s and basic pay: %f\n",employee[i].name,employee[i].pay);
	}
}
