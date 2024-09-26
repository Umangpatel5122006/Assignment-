/*This programe is designed to print      *
                                        *   *
                                      *   *   *
                                    *   *   *   *
                                  *   *   *   *   *
*/

#include<stdio.h>
void main()
{

	int i=0,j=0,sum=0;
	for(i=1;i<=5;i++)
		{
			for(j=1;j<=5;j++)
			{
				sum=i+j;
				if(sum==6) 
				{
					printf("*");
				}
				if(sum==7) 
				{
					printf("*");
				}
				if(sum==8) 
				{
					printf("*");
				}
				if(sum==9) 
				{
					printf("*");
				}
				if(sum==10) 
				{
					printf("*");
				}
				
				else
				{
					printf(" ");
				}
			}
		printf("\n");
		}
}
