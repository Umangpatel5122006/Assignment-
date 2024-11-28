/*A FILE CALLED “LNMIITSTUDENT.JAVA” CONTAINS INFORMATION SUCH AS STUDENT ROLL
NUMBER, NAME AND TOTAL MARKS. WRITE A C PROGRAM TO CREATE A FILE TO STORE DETAILS OF N
STUDENTS.
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct StudentInfo
{
    int rollNo;
    char name[100];
    float totalMarks;
};
void main()
{  
	int i=0;
    FILE *fptr;
    fptr = fopen("E:\\LNMIITSTUDENT.JAVA","w");
    int N;
    printf("Enter number of total student\n: ");
    scanf("%d",&N);
    getchar();
    struct StudentInfo s[N];

    for(i =0; i < N; i++)
    {   
        printf("Enter the details of student\n");
        printf("Enter Roll No.: ");
        scanf("%d",&s[i].rollNo);
        getchar();
        printf("Enter student Name: ");
        gets(s[i].name);
        printf("Enter Total Marks: ");
        scanf("%f",&s[i].totalMarks);
        
        fprintf(fptr,"%s","Roll_No:");
        fprintf(fptr,"%d",s[i].rollNo);
        fprintf(fptr,"%s","\n");

        fprintf(fptr,"%s","Name:");
        fprintf(fptr,"%s",s[i].name);
        fprintf(fptr,"%s","\n");

        fprintf(fptr,"%s","Total Marks");
        fprintf(fptr,"%f",s[i].totalMarks);
        fprintf(fptr,"%s","\n");

        fprintf(fptr,"%s","\n");


    }
    fclose(fptr);

    
}
