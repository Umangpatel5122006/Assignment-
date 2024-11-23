//This programe is designed to find greatest integers from N numbers using pointer
#include<stdio.h>
#include<string.h>
void main()
{
	int *ptr,n=0,i=0,a=0,b=0;
	printf("Enter total number\n");
	scanf("%d",&n);
	ptr=&b;
	printf("Enter number\n");
	scanf("%d",&a);
	for(i=0;i<n-1;i++)
	{
		scanf("%d",ptr);
		if(a<(*ptr))
		{ 
			int temp;
			
			temp=(*ptr);
			(*ptr)=a;
			a=temp;
		}
		else
		{
			continue;
		}
	}
	printf("Greatest number is %d\n",a);
}
