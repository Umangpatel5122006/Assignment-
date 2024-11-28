/*
IMPLEMENT A FUNCTION NAMED AS FLIP; WHICH WILL TAKE A NUMBER AS INPUT AND FLIP ITS
LAST N DIGITS FOR EXAMPLE FLIP(123, 2)= 132 ; (HERE N=2) FLIP(12345,3)= 12543 (HERE N=3)
*/

#include<stdio.h>
#include<math.h>

int countDigits(int n)
{  
	 int count =0;

    while(n != 0)
    {
        count++;
        n  /= 10;
    }
    return count;
}
//function to store each digit in array
void storeDigits(int num,int arr[],int digits)
{
	int i=0;
    for(i =0; i <digits; i++ )
    {
        arr[digits-i-1] = num%10;
        num =num/10;
    }
}
//function to swap integer variables
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b; 
    *b =t;
}

int flipNum(int digits, int arr[],int n)
{   int answer=0;
	int i=0;
    for( i =0; i < n/2; i++)
    {
        swap(&arr[digits-1-i],&arr[digits-n+i]);
    }
    for( i =0; i < digits;i++)
    {
        answer = answer + (pow(10,digits-i-1)*arr[i]); 
    }
    return answer;
}



void main()
{   int num,n;
    printf("Enter the number and the value of N: ");
    scanf("%d %d",&num,&n);

    int digits = countDigits(num);
    if(n >digits)
    {
        printf("Invalid Input");
    }
    else
    {
        int arr[digits];
        storeDigits(num,arr,digits);
        int ans = flipNum(digits,arr,n);
    printf("%d",ans);
    }
  
}
