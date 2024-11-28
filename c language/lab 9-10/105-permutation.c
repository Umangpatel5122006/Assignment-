/*
//This programe is designed TO PRINT ALL PERMUTATIONS OF A GIVEN STRING USING POINTERS.
THE PERMUTATIONS
OF THE STRING ARE: ABCD ABDC ACBD ACDB ADCB ADBC BACD BADC BCAD BCDA BDCA BDAC CBAD
CBDACABD CADB CDAB CDBA DBCA DBAC DCBA DCAB DACB DABC
*/
#include<stdio.h>
#include<string.h>
void swap (char *a, char *b)
{
    char t = *a;
    *a = *b;
    *b =t;
}
void permute(char *word,int left,int right)
{
	int i=0;
    //base case
    if(left == right)
    {
        printf("%s \n",word); // printing the word after complete permutation
    }
    else
    {
     for(i = left; i <= right; i++)
     {
        swap(word+left,word+i); //swapping letters keeping first letter fix
        permute(word, left+1,right); // recursive call for permutation
        swap(word+i,word+left); 
     }
    }
}

int main()
{
    char word[]= "ABCD";
    int left =0,n =strlen(word);
    permute(word,0,n-1);

return 0;
}
