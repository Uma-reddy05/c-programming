/*
Day 15 - pointers in c
Topic - basics, * and &
Author - Uma
Date - 15-10-2026
*/

#include <stdio.h>
int main(){
    
    //--------BASIC POINTER--------
    int a = 25;
    int *b = &a;

    printf("values of a : %d\n",a);
    printf("values using pointer : %d\n",*b);
    printf("address of a : %p\n",(void *)&a);
    printf("address stored in ptr : %p\n",(void *)b);


    //------CHANGE A VALUE USING A POINTER-------
    int num = 10;
    int *ptr = &num;

    printf("before : %d\n",num);

    *ptr = 50;
    printf("after : %d\n",num);


    //--------TWO VARIABLES AND TWO POINTERS---------
    int x = 15;
    int y  = 30;

    int *pt1 = &x;
    int *pt2 = &y;

    printf("x = %d\n", *pt1);
    printf("y = %d\n", *pt2);
    printf("sum = %d\n", *pt1 + *pt2);


    //---------SWAP TWO NUMBERS--------
    int first = 5;
    int second = 10;
    int temp;

    int *pr1 = &first;
    int *pr2 = &second;
    printf("before swapping : first = %d, second = %d\n",a,b);

    temp = *pr1;
    *pr1 = *pr2;
    *pr2 = temp;

    printf("after swapping : first = %d, second = %d\n",a,b);


    return 0;


}

/*

-----------WHAT I LEARNED---------

1. A pointer stores a memory address.

2. &num gives the address of num.

3. int *ptr declares a pointer to an integer.

4. *ptr accesses the value at that address.

*/