//This programe is designed TO ADD /APPEND INFORMATION TO THE FILE “LNMIITSTUDENT.DAT”. 
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
	fptr = fopen("E:\\LNMIITSTUDENT.DAT", "a"); // Open the file in append mode
    if (fptr == NULL) {
        printf("Error opening file for appending!\n");
        return 1;  // when the file can't be opened
    }
	int N;
    printf("Enter number of total students whose info. you want to update\n: ");
    scanf("%d",&N);
    getchar();
    struct StudentInfo s[N];
    struct StudentInfo student;
     printf("\nEnter the details of student\n");
     for (i = 0; i < N; i++) 
	 {
	 	student=s[i];
        printf("Enter Roll No.: ");
        scanf("%d", &student.rollNo);
        getchar(); 
        printf("Enter student Name: ");
        fgets(student.name, sizeof(student.name), stdin);
        // Remove the trailing newline character added by fgets (if any)
        student.name[strcspn(student.name, "\n")] = 0;

        printf("Enter Total Marks: ");
        scanf("%f", &student.totalMarks);

	    fprintf(fptr, "Roll No: %d\n", student.rollNo);
	    fprintf(fptr, "Name: %s\n", student.name);
	    fprintf(fptr, "Total Marks: %.2f\n\n", student.totalMarks);
	        // Append the student details to the file
    }

    fclose(fptr); // Close the file after appending
    printf("Student details successfully appended to file.\n");

}

