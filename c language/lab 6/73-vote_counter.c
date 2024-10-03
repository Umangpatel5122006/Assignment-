//This programe is designed to calculate vote using array

#include<stdio.h>
void main()
{
	int a[4]={0};
	int b=0,n,i=0,spoilt=0;//n= number of total ballot and b=value of ballot
	printf("Enter the number of ballot \n");
	scanf("%d",&n);
	printf("Enter value of ballot \n");

	for(i=0;i<n;i++)
	{
		scanf("%d",&b);
		if(b>0&&b<6)
		{
			switch(b)//adding votes according to entered number by the user
			{
				case 1:
					{
						a[0]=a[0]+1;
						break;
					}
				case 2:
					{
						a[1]=a[1]+1;
						break;
					}
				case 3:
					{
						a[2]=a[2]+1;
						break;
					}
				case 4:
					{
						a[3]=a[3]+1;
						break;
					}
				case 5:
					{
						a[4]=a[4]+1;
						break;
					}
			}
		}
		else
		{
			spoilt=spoilt+1;
		}	
	}
	for(i=0;i<5;i++)
	{
		printf("Votes of Candidate %d : %d \n",i+1,a[i]);
	}
	printf("spoilt votes : %d \n",spoilt);
	
}
