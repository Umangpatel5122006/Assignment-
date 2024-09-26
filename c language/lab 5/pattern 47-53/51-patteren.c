/*This programe is designed to print     10000
										 01000
										 00100
										 00010
										 00001
										 
*/
#include<stdio.h>
void main()
{
	int a,i=0,j=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==j)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
}
