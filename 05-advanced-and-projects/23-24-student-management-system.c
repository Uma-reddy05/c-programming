/*
Day 23 and 24 - mini project
Topic - student management system
Author - Uma
Date - 23-10-2026 and 24-10-2026
*/

#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct student{
    char name[50];
    int rollno;
    float marks;
};

struct student students[MAX_STUDENTS];
int count = 0;

void saveToFile(){
    FILE *fp = fopen("students.txt", "w");

    if(fp == NULL){
        printf("error saving records \n");
        return ;
    }

    for(int i = 0 ; i<count ; i++){
        fprintf(fp, "%d %s %f \n",
        students[i].rollno,
        students[i].name,
        students[i].marks);
    }

    fclose(fp);
}

void loadFromFile(){
    FILE *fp = fopen("students.txt", "r");

    if (fp == NULL){
        return;
    }

    while(count < MAX_STUDENTS &&
          fscanf(fp, "%d %s %f",
                 &students[count].rollno,
                 &students[count].name,
                 &students[count].marks)==3){
        count++;
    }
    fclose(fp);
                
}

void addstudent(){
    if(count>=MAX_STUDENTS){
        printf("student limit reached");
        return;
    }
    int rollno;

    printf("enter roll number : ");
    if(scanf("%d", &rollno) != 1){
        printf("invalid roll number \n");
        while(getchar() != '\n');
        return;
      
    }

    for(int i=0 ; i<count ; i++){
        if(students[i].rollno == rollno){
            printf("roll number already exists \n");
            return;

        }
        
    }

    students[count].rollno = rollno;

    printf("enter name(one word) : ");
    scanf("%49s", &students[count].name);

    printf("enetr marks : ");
    if(scanf("%f",&students[count].marks)!= 1){
        printf("invalid marks \n");
        while (getchar() != '\n');
        return ;
    }
    count++;
    saveToFile();

    printf("students added successfully \n");
    
}

void displaystudents(){
    if (count == 0){
        printf("no student record found! ");
        return ;
    }
    printf("-------STUDENT RECORD------");

    for(int i=0 ; i<count ; i++){
        printf("Roll Number : %d \n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }
}

void searchstudent(){
    int rollno;

    printf("enter roll number to search : ");
    if(scanf("%d", &rollno)!= 1){
        printf("invalid roll number \n");
        while(getchar() != '\n');
        return;
    }

    for(int i=0 ; i<count ; i++){
        if(students[i].rollno == rollno){
            printf("student found \n");
            printf("Roll Number: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            return;
        }
    }
    printf("student not found \n");
}


void deletestudent(){
    int rollno;

    printf("enter roll number to delete : \n");
    if (scanf("%d", &rollno)!= 1){
        printf("invalid roll number \n");
        while(getchar()!= '\n'){
            
        }
        return;
    }
    for(int i =0 ; i<count ; i++){
        if(students[i].rollno == rollno){
            for(int j=i ; j<count-1 ; j++){
                students[j] = students[j+1];
            }
            count--;
            saveToFile();

            printf("student deleted successfully \n");
            return ;
        }
    }
    printf("student not found");
}


int main(){
    int choice;
    loadFromFile();

        do {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");

        if(scanf("%d", &choice)!=1){
            printf("Please enter a valid menu number!\n");
            while (getchar() != '\n');
            continue;

        }
        switch (choice) {
            case 1:
                addstudent();
                break;

            case 2:
                displaystudents();
                break;

            case 3:
                searchstudent();
                break;

            case 4:
                deletestudent();
                break;

            case 5:
                printf("Thank you for using the system!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 5);

    return 0;
}
