/*
MODIFY VALUE STORED IN OTHER VARIABLE USING A POINTER IN C
A. INITIALIZE THE POINTER WITH THE OTHER (A NORMAL VARIABLE WHOSE VALUE WE HAVE TO
MODIFY)
*/
#include<stdio.h>

void main()
{
    int var,value,*ptr;
    ptr = &var;

    printf("Enter the initial value of variable: ");
    scanf("%d",&var);
    printf("\n%d is the initial value of variable",var);

    printf("\nEnter the new value of variable: ");
    scanf("%d",&value);
    *ptr = value;
    printf("\n%d is the modified value of variable",var);

    
}
