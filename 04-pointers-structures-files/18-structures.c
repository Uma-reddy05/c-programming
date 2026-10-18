/*
Day 18 - structures in c
Topic - student details using struct
Author - Uma
Date - 18-10-2026
*/


#include <stdio.h>

struct student{
    char name[20];
    int rollno;
    float marks;
};

int main(){
    struct student s1;

    printf("enter student name : ");
    scanf("%49s", &s1.name);

    printf("enter student roll number : ");
    scanf("%d", &s1.rollno);

    printf("enter marks : ");
    scanf("%f", &s1.marks);


    printf("----------STUDENT DETAILS---------\n");
    printf("name : %s \n",s1.name);
    printf("rollno : %d \n", s1.rollno);
    printf("marks : %.2f \n",s1.marks);

    return 0;
}

/*
------WHAT I LEARNED TODAY--------
1. introduction to structures in c
2. define a structure with different data type
3. declaring structure variable
4. accessing structure members using dot(.) operator
*/