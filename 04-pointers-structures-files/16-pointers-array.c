/*
Day 16 - pointers in c
Topic - pointers with array and functions
Author - Uma
Date - 16-10-2026
*/

#include <stdio.h>
void doubleValue(int *ptr){
    *ptr = *ptr*2;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main(){

    //--------PRITING ARRAY ELEMENTS USING POINTER---------
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    for(int i=0; i<5 ; i++){
        printf("%d \n", *(ptr + i));
    }
  
    
    //-----FINDING SUM OF ARRAY USING POINTER---------
    int arr2[5] = {1, 20, 5, 36, 50};
    int *ptr2 = arr2;
    int sum = 0;

    for(int i=0 ; i<5 ; i++){
        sum += *(ptr + i);
    }
    printf("sum = %d \n", sum);

 
    //--------POINTERS WITH FUNCTION---------
    int num = 10;
    printf("before : %d \n", num);
    doubleValue(&num);

    printf("after : %d\n",num);

    
    //--------SWAP TWO NUMBERS USING FUNCTION----------
    int x = 5;
    int y = 10;

    swap(&x, &y);

    printf("x = %d \n",x);
    printf("y = %d \n",y);

    return 0;

}

/*

-------WHAT I LEARNED---------

1. *(ptr + i) - accesses array element using a pointer
2. sum += *(ptr + i) - calculates the array sum
3. doubleValue(&num) - passes a variable address to a function
4. swap(&x, &y) - swaps two values using a function and pointers


*/