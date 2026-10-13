/*
Day 14 - mini revision
Topic - armstrong number
Author - Uma
Date - 14-10-2026
*/

#include <stdio.h>
int main(){
    int num, original, digit;
    int sum = 0;

    printf("enter a number : ");
    scanf("%d",&num);

    original = num;

    while(num>0){
        digit = num%10;
        sum = sum + digit*digit*digit;
        num = num/10;

    }

    if(sum==original){
        printf("armstrong number ");
    }
    else{
        printf("not a armstrong number");
    }
    return 0;
}

/*
--------SAMPLE OUTPUT-------
enter a number : 153
armstrong number 

--------WHAT I LEARNED------
1. % 10 extracts the last digit
2. / 10 removes the last digit
3. a while loop processes every digit
4. the sum is compared with the original number

*/