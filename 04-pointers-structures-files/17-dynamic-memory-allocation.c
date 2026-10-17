/*
Day 17 - dynamic memory allocation
Topic - malloc(), calloc(), free()
Author - Uma
Date - 17-10-26
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 5;
    int *arr = malloc(n*sizeof(int));

    if(arr == NULL){
        printf("memory allocation failed! \n");
        return 1;
    }

    printf("using malloc : \n");

    for(int i = 0 ; i<n ; i++){
        arr[i] = (i + 1)*10;
        printf("%d",arr[i]);
    }
    printf("\n");

    free(arr);
    arr = NULL;



    int *numbers = calloc(n, sizeof(int));

    if(numbers == NULL){
        printf("memory allocation failed! ");
        return 1;
    }

    printf("using calloc(initial values) : \n");

    for(int i=0 ; i<n ; i++){
        printf("%d",numbers[i]);
    }

    for(int i = 0 ; i<n ; i++){
        numbers[i] = i+1;
    }
    printf("updated values \n");

    for(int i=0 ; i<n ; i++){
        printf("%d",numbers[i]);
    }
    printf("\n");


    free(numbers);
    numbers = NULL;

    printf("memory released successfully! \n");
    
    return 0;
}