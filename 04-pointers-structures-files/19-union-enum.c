/*
Day 19 - union and enum in c
Author - Uma
Date - 19-10-2026
*/

#include <stdio.h>

union data{
    int num;
    float decimal;
    char letter;
};

enum day{
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
    sunday
};

int main(){

    union data d1;
    d1.num = 100;
    printf("union integer : %d\n",d1.num);

    d1.decimal = 25.5;
    printf("union float : %2.f\n",d1.decimal);

    d1.letter = 'A';
    printf("union character : %c\n",d1.letter);


    
    enum day today;

    today = wednesday;
    printf("enum value : %d\n",today);

    if(today==wednesday){
        printf("today is wednesday! \n");
    }

    return 0;
}

/*

--------WHAT I LEARNED-----
1. What a union is and how to declare one.
2. How union members share memory.
3. Why assigning one union member affects the others.
4. What an enumeration (enum) is.
5. How enum constants receive integer values by default.
6. How to use enums in conditions.

*/