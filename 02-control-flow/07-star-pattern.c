/*
Day 07 - patterns in c
Topic - star pyramid and number triangle
Author - Uma
Date - 07-10-2026
*/

#include <stdio.h>
int main(){

    int rows,i,j;
    printf("enter number of rows : ");
    scanf("%d",&rows);

    //------------------STAR PYRAMID----------------
    for(i=1 ; i<=rows ; i++){
        for(j=1 ; j<=rows-i ; j++){
            printf(" ");
        }

        for(j=1 ; j<=(2*i-1) ; j++){
            printf("*");
        }
        printf("\n");
    }




    //----------------NUMBER TRIANGLE---------------
    for(i=1 ; i<=rows ; i++){
        for(j=1 ; j<=i ; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;
}

/*
----------SAMPLE OUTPUT---------------
enter number of rows : 5

//-------STAR PYRAMID---------
    *
   ***
  *****
 *******
*********

//------------NUMBER TRIANGLE----------
1
12
123
1234
12345

1. nested loops are loops inside another loops
2. the outer loop controls the number of rows
3. the inner loop controls what is printed in each row
4. spaces can be used to create a pyramid shape
5. star and number triangle can be printed using nested loops
6. pattern programs improve logical thinking and loop understanding

*/