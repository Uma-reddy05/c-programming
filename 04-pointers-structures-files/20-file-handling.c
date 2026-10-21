/*
Day 20 - file handlng in c
Topic - writing and reading files
Author - Uma
Date - 21-10-26
*/

#include <stdio.h>
int main(){
    FILE *fp;
    char name[50];
    int rollno;
    float marks;
    
    //writ data to a file
    fp = fopen("student.txt", "w");

    if(fp==NULL){
        printf("unable to open file \n");
        return 1;
    }

    fprintf(fp, "uma 17 95 \n");
    fclose(fp);
    printf("data written successfully \n");
    

    // read data from the file
    fp = fopen("student.txt", "r");

    if(fp == NULL){
        printf("unable to open \n");
        return 1;
    }

    fscanf(fp, "%49s %d %f ", &name, &rollno, &marks);

    printf("---------STUDENT DETAILS--------\n");
    printf("name : %s \n", name);
    printf("roll number : %d \n", rollno);
    printf("marks : %f \n", marks);
    
    fclose(fp);

    return 0;
}