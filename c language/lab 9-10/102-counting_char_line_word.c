//WRITE A C PROGRAM TO COUNT NUMBER OF CHARACTERS, WORDS AND LINES IN A TEXT FILE.

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int charCount =0,wordsCount=0,lineCount =0;
    
    FILE *fptr;
    fptr =fopen("E:\\student.txt","r");
    char ch;
    fscanf(fptr,"%c",&ch);
    while(!feof(fptr))
    {
        charCount++;
        if(ch == ' ')
        {
            wordsCount++;
        }
        if(ch == '\n')
        {
            lineCount++;
        }

        fscanf(fptr,"%c",&ch);
    }

    printf("%d is the character count\n %d is the word count \n %d is the line ",charCount,wordsCount,lineCount);
}
