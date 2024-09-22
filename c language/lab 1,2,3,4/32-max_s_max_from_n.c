// this programe is to find max and second max. number from givien total terms

#include<stdio.h>
void main()
{
	int max,n,i=1,a,smax=0;
	printf("Enter number for total terms \n");
	scanf("%d",&n);
	printf("Enter numbers \n");
	scanf("%d",&max);
	while(i<n)
	{
		scanf("%d",&a);
		if(a>max)
		{
			smax=max;
			max=a;
		}
		else if(a<max && a>smax)
		{
			smax=a;
		}
		i=i+1;
	}
	printf("max is %d and second max is %d",max,smax);
}
