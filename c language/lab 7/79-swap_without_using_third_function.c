/* this programe is designed to interchange value of two variable without using third variable 
using function
*/
#include <stdio.h>
int swap(int,int);
void main()
{
	int a,b;
	printf("Enter value of a,b \n");
	scanf("%d%d",&a,&b);
	swap(a,b);
}
int swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n Value of a is %d and value of b is %d ",a,b);
}
