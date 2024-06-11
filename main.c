#include <stdio.h>
#include <conio.h>
#include <string.h>

struct student{
    char firstName[20];
    char lastName[20];
    int grade;
    char classLetter;
    double gpa;
    float per; 
}

void main(){
    int choice;
    while (choice!=5) {
        char outFirst[] = " \
|================[STUDENT DATABASE MANAGEMENT SYSTEM]================|\n\
\n\
    [1] Add Student Record \n\
    [2] Student Records \n\
    [3] Search Student Records\n\
    [4] Delete Student Record\n\
    [5] Exit\n\
                        \n\
|=====================================================================|\n\
                        \n\
                        ";
        printf("%s", outFirst);
        scanf("%d", &choice)
    }

    switch(choice){
        case 1:
            clrscr();
            addStudent();
            clrscr();
            break;
        case 2: 
            studentRecord();
        case 3:
            searchStudent();


    }
}

void addStudent(){
    char another;
    FILE *fp;
    struct student info;
    
    do {
            clrscr();
            char outFirst[] = " \
|=========================[ADD STUDENT INFO]=========================|\n\
\n\
    [1] Add Student Record \n\
    [2] Student Records \n\
    [3] Search Student Records\n\
    [4] Delete Student Record\n\
    [5] Exit\n\
                        \n\
|=====================================================================|\n\
                        \n\
                        ";
            
    } while();


}
void studentRecord();
void searchStudent();
void delete();