//This programe is designed TO DEFINE A MACRO TO FIND BIGGEST NUMBER OF TWO GIVEN NUMBERS.
#include<stdio.h>
#define BIGGEST(a,b)  ((a)>(b)?(a):(b))

int main()
{   int num1,num2;
    printf("Enter number 1: ");
    scanf("%d",&num1);
    printf("Enter number 2: ");
    scanf("%d",&num2);

    int result = BIGGEST(num1,num2);
    printf("%d is the biggest among entered numbers",result);
    return 0;

}
