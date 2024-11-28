/*
CREATE A STRUCTURE NAMED ITEM THAT HAS MEMBERS NAMELY, ITEM_NAME, QUANTITY,
PRICE AND AMOUNT. IMPLEMENT A USER-DEFINED FUNCTION THAT TAKES READ ITEM_NAME, QUANTITY AND
PRICE AS INPUT AND CALCULATE AMOUNT= QUANTITY * PRICE AND PRINT THE SAME AS OUTPUT.
*/
#include<stdio.h>

struct ITEM
{
    char name[100];
    int quantity;
    float price;
    float amount;
};

float calculate(struct ITEM s)
{
    s.amount = s.price * s.quantity;
    return s.amount;
}

void main()
{   
    struct ITEM s1;
    printf("Enter the name of the item: ");
    scanf("%s",s1.name);
    printf("Enter the quantity of item: ");
    scanf("%d",&s1.quantity);
    printf("Enter the price of the item: ");
    scanf("%f",&s1.price);
    
    s1.amount = calculate(s1); // function call to calculate amount
    
    printf("The amount of %s is %f",s1.name,s1.amount); //printing output
   
}
