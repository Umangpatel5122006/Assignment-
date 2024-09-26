/*This programe is designed to print      1
                                         121
                                        12321
                                       1234321
                                      
*/

#include<stdio.h>
void main()
{

	int i=0,j=0,sum=0,sub=0;
	for(i=1;i<=4;i++)
		{
			for(j=1;j<=5;j++)
			{
				sum=i+j;
				if(sum==6)
				{
					printf("1");
				}
				else if(sum==7)
				{
					printf("2");
				}
				else if(sum==8)
				{
					printf("3");
				}
				else if(sum==9)
				{
					printf("4");
				}
				else if(sum==10)
				{
					printf("5");
				}
				else
				{
					printf(" ");
				}
			}
			for(j=5;j<=7;j++)
			{
				sub=j-i;
				
				if(sub==3)
				{
					printf("1");	
				}
				
				else if(sub==2)
				{	
						printf("2");
						
				}
				else if(sub==1)
				{
					
						printf("3");
					
				}
			}
		
		printf("\n");
		}
}
