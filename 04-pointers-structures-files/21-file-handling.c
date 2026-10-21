/*
Day 21 - file handling in c
Topic - copy one file to another
Author - Uma
Date - 21-10-2026
*/

#include <stdio.h>
int main(){
    FILE *source, *destination;
    int ch;
    //open source file for reading
    source = fopen("source.txt","r");

    if(source==NULL){
        printf("unable to open source file ");
        return 1;

    }

    // open destination file for writing
    destination = fopen("destination.txt", "w");

    if(destination== NULL){
        printf("unable to open destination file ");
        fclose(source);
        return 1;
    }

    // copy contents character by character
    while((ch=fgetc(source)) != EOF){
        fputc(ch, destination);
    }

    printf("file copied successfully! \n");
    
    //close both files
    fclose(source);
    fclose(destination);

    return 0;
}