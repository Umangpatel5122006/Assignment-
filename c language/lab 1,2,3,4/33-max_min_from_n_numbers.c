// this programe is to find max and min. number from givien total terms

#include<stdio.h>
void main()
{
	int max,min,n,i=0,a;
	printf("Enter number for total terms \n");
	scanf("%d",&n);
	printf("Enter numbers \n");
	scanf("%d%d",&max,&min);
	if(max<min)//applicable when 1st number is less than other
		{
			min=max+min;//swapping values of two variables without using third
			max=min-max;
			min=min-max;
		}
		
	while(i<n-2)
	{

		scanf("%d",&a);
		if(max<a)
			{
				max=a;
			}
		if(min>a)
			{
				min=a;	
			}
		
		i=i+1;
	}
	printf("\n %d is max. and %d is min. number",max,min);
}
