/*
Day 11 - two dimensional array
Topic - matrix addition
Author - Uma
Date - 11-10-2026
*/

#include <stdio.h>
int main(){

    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int sum[2][2];
    int i,j;

    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<2 ; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    
     printf("result of matrix addition is : \n");

    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<2 ; j++){
            printf("%d",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*--------SAMPLE OUTPUT---------

result of matrix addition is : 
6 8
10 12

-------WHAT I LEARNED--------
1. a 2d array stores elements in rows and coloumns
2. nested loops accesss each matrix element
3. matrix addition adds corresponding elements
4. the result is stored in another 2d array

*/