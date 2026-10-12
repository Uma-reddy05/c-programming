/*
Day 12 - string operations without library functions
Topic - string length, string copy, string compare
Author - Uma
Date - 12-10-2026
*/

#include <stdio.h>
int my_strlen(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

void my_strcpy(char destination[], char source[]){
    int i = 0;
    while(source[i] != '\0'){
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

int my_strcmp(char str1[], char str2[]){
    int i = 0;
    while(str1[i] == str2[i] && str1[i] != '\0'){
        i++;
    }
    return str1[i] - str2[i];
}

int main(){
    char str1[] = "hello";
    char str2[] = "hello";
    char copy[20];

    printf("length = %d \n", my_strlen(str1));

    my_strcpy(copy, str1);
    printf("copied string = %s \n",copy);

    if (my_strcmp(str1, str2) == 0){
        printf("strings are equal \n");
    }
    else{
        printf("strings are not equal \n");
    }
    return 0;
}

/*

----------SAMPLE OUTPUT---------
length = 5 
copied string = hello 
strings are equal 

-------WHAT I LEARNED-------
1. strings end with null character '\0'
2. string length can be counted using loop
3. string copying requires copying the null character too
4. strings can be compared character by character
5. these functions can be implemented without string.h

*/