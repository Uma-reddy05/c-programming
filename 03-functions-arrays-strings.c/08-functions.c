/*
Day 08 - functions in c
Topic - functions : no arguments, with arguments and return types
Author - Uma
Date - 08-10-2026
*/

#include <stdio.h>

//---------------- NO ARGUMENTS, NO RETURN VALUE ----------------
void hello(){
    printf("hello welcome to c functions. \n");
}

//--------------- WITH ARGUMENTS, NO RETURN VALUE ----------------
void addnums(int a, int b){
    int sum = a + b;
    printf("sum is : %d \n",sum);
}

//---------------- WITH ARGUMENTS AND RETURN VALUE ----------------
int multiplynums(int a, int b){
    return a * b;
}

int main(){

    // Calling function with no arguments
    hello();

    // Calling function with arguments
    addnums(10,20);

    // Calling function with arguments and return value
    int result;
    result = multiplynums(5,4);
    printf("mulitplication = %d \n",result);

    return 0;

}
/*

----SAMPLE OUTPUT----
hello welcome to c functions. 
sum is : 30 
mulitplication = 20 


----WHAT I LEARNED----
1. a function is a block of code used to perform a specific task
2. functions help us to reuse code
3. void means the function does not return a value
4. arguments are values passed through the function
5. A return statement sends a value back to the calling function
6. A function can have no arguments
7. A function can accept arguments
8. A function can return a value
9. Functions make programs easier to organize and understand


*/