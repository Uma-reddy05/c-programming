/*
Day 10 - one dimensional arrays
Topic - sum, maximum and minimum
Author - Uma
Date - 10-10-2026
*/

#include <stdio.h>
int main(){
    int arr[5] = {10, 25, 5, 40, 15};
    int i;
    int sum = 0;
    int max = arr[0];
    int min = arr[0];

    // display array elements
    printf("Array elements : \n");

    for(i=0 ; i<5 ; i++){
        printf("%d",arr[i]);

        //calculate sum
        sum = sum + arr[i];

        //find maximum
        if(arr[i]> max){
            max = arr[i];
        }

        //find minimum
        if(arr[i] < min){
            min = arr[i];
        }
    }

    printf("sum = %d \n",sum);
    printf("maximum = %d \n",max);
    printf("minimum = %d \n",min);

    return 0;
}

/*
----------SAMPLE OUTPUT--------
Array elements : 10 25 5 40 15
sum = 95 
maximum = 40 
minimum = 5 

-------WHAT I LEARNED---------
1. an array stores multiple values of the same type
2. array indexing starts from 0
3. a for loop can access each array element
4. the sum is calculated by adding each elementt
5. maximum and minimum are forund using if condition

*/