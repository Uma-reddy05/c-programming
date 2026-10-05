/*
* Day 06 - loop practice in c
* Topice - factorial, prime number check, fibonacci series
* Author - Uma
* Date - 06-10-2026
*/

#include <stdio.h>
int main(){
    
    //---------------FACTORIAL-------------------
    int num,i;
    int factorial = 1;
    printf("enter a number : ");
    scanf("%d",&num);

    for(i = 1 ; i<=num ; i++){
        factorial = factorial*i;
    }
    printf("factorial of %d = %d \n",num,factorial);

    //-------------------PRIME NUMBER-----------------
    int isprime = 1;
    printf("enter a number to check prime : ");
    scanf("%d",&num);

    if(num<=1){
        isprime = 0;
    }
    else{
        for(i=2 ; i<num ; i++){
            if(num%i == 0){
                isprime = 0;
                break;
            }
        }
    }
    if(isprime==1){
        printf("%d is a prime number \n",num);
    }
    else{
        printf("%d is not a prime number \n",num);
    }


    //----------------FIBONACCI SERIES------------------
    int terms,a,b,c;
    printf("enter number of terms for fibonacci series : ");
    scanf("%d",&terms);
    printf("fibonacci series : ");

    a = 0;
    b = 1;
    c = 0;

    for(i=1 ; i<=terms ; i++){
        printf("%d \n",a);
        
        c = a+b;
        a = b;
        b = c;
        
    }

    return 0;

}

/*

--------------SAMPLE OUTPUT------------

---------------FACTORIAL-------------------
enter a number : 3
factorial of 3 = 6 

-------------------PRIME NUMBER-----------------
enter a number to check prime : 4
4 is not a prime number 

----------------FIBONACCI SERIES------------------
enter number of terms for fibonacci series : 7
fibonacci series : 0 
1 
1 
2 
3 
5 
8 

---------------------WHAT I LEARNED-------------------
1. factorial can be calculated using a loop
2. % is used to check whether a number is divisible 
3. a prime number has exactly two factors : 1 and itself
4. fibonacci series starts with 0 and 1
5. each fibonacci number is the sum of the previous two numbers
6. a temporary variable can be used to update multiple values

*/