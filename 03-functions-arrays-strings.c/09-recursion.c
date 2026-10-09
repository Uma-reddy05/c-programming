/*
Day 09 - functions and recursion
Topics - factorial and fibonacci series
Author - Uma
Date - 09-10-2026
*/

#include <stdio.h>

// ---------FACTORIAL USING RECURSION-----------
int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n*factorial(n-1); // RECURSIVE CALL
}


//---------FIBONACCI USING RECURSION------------
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}


int main(){
    int num,terms,i;

    // FACTORIAL
    printf("enter a number for factorial : ");
    scanf("%d",&num);

    if(num<0){
        printf("factorial is not defined for negative numbers ");
    }
    else{
        printf("factorial of %d = %d \n",num,factorial(num));
    }


    // FIBONACCCI SERIES
    printf("enter number of fibonacci terms : ");
    scanf("%d",&terms);

    if(terms<0){
        printf("number of terms cannot be negative");
    }
    else{
        printf("fibonacci series : ");

        for(i=0 ; i<terms ; i++){
            printf("%d \n",fibonacci(i));
        }
        printf("\n");
    }
    return 0;
}

/*

------------SAMPLE OUTPUT------------

enter a number for factorial : 5
factorial of 5 = 120 


enter number of fibonacci terms : 8
fibonacci series : 0 
1 
1 
2 
3 
5 
8 
13 

----------WHAT I LEARNED------------
1. recursion means a function calls itself
2. factorial can be calculated using recursion
3. fibonacci numbers are calculated by adding the previous two numbers
4. recursive functions can return values


*/