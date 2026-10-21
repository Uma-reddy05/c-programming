/*
Day 22 - preprocessor, macros and storage classes
Author - Uma
Date - 22-10-2026
*/

#include <stdio.h>

#define PI 3.14
#define SQUARE(x) ((x)*(x))

int globalNum = 100;  //global variable

void counter(){
    static int count = 0;
    count++;

    printf("static count : %d \n", count);
}

int main(){

    //preprocessor and macros
    int radius;

    printf("PI : %f \n",PI);
    printf("SQUARE : %d \n",SQUARE(5));
    printf("circle area : %f \n", PI*radius*radius);


    // auto storage class
    auto int a = 10;
    printf("auto variable : %d \n",a);


    // register storage class
    register int i;

    printf("regester values : ");
    
    for(i=1 ; i<=3 ; i++){
        printf("%d \n",i);
    }
    printf("\n");

    
    //static storage class
    counter();
    counter();
    counter();


    //extern storage class
    extern int globalNum;
    printf("global variable : %d \n", globalNum);

    return 0;
}


/*
------WHAT I LEARNED------

1. Introduction to preprocessor directives in C.
2. Using #include to include header files.
3. Using #define to create macros.
4. Creating function-like macros, such as SQUARE(x).
5. Understanding storage classes: auto, register, static, and extern.
6. Learning how static variables preserve their values between function calls.
7. Understanding global variables and how extern declares variables defined elsewhere.

*/