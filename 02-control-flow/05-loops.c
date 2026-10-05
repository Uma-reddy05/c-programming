/*
* Day 05 - loops in c
* Topic - for loop, while loop and do-while loop
* Program - Print numbers from 1 to 100
* Author - Uma
* Date - 05-10-2026
*/

#include <stdio.h>
int main(){

    //-------------------FOR LOOP-----------------

    printf("------------FOR LOOP--------------- \n");

    for(int i=1 ; i<=100 ; i++){
        printf("%d \n",i);
    }

    //-------------------WHILE LOOP--------------------
    printf("------------------WHILE LOOP-------------- \n");
    int i = 1;
    while(i<=100){
        printf("%d \n",i);
        i++;
    }

    //------------------DO WHILE LOOP-------------------
    printf("-------------------DO WHILE LOOP-------------- \n");
    i = 1;
    do{
        printf("%d \n",i);
        i++;
    }
    while(i<=100);

    return 0;
}

/*
----SAMPLE OUTPUT---- 

---- FOR LOOP ---- 
1 2 3 4 5 6 7 8 9 10 ... 98 99 100 

---- WHILE LOOP ---- 
1 2 3 4 5 6 7 8 9 10 ... 98 99 100 

---- DO-WHILE LOOP ---- 
1 2 3 4 5 6 7 8 9 10 ... 98 99 100 


----WHAT I LEARNED----
1. loops are used to repeat a block of code
2. for loop is used when the number of repeatitions is known
3. while loop checks the condition before executing the loop
4. do-while loop executtes the code at least once
5. i=1 initializes the loop
6. i<=100 is the loop condition
7. i++ increases the values of i by 1
8. for,while,do while can be used to repeat tasks

*/