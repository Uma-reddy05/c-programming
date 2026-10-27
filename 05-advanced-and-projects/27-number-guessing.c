/*
Day 27 - number guessing game in c
Author - Uma
Date - 27-10-2026
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int secret, guess;
    int attempts = 0;

    srand(time(NULL));
    secret = rand() % 100 + 1;

    printf("-------number guessing game-------\n");
    printf("guess a number between 1 and 100 \n");

    while(1){
        printf("enter you guess : ");

        if(scanf("%d",&guess)!=1){
            printf("please enter a valid number");

            int ch;
            while (getchar()!= '\n');
            continue;
        }
        attempts++;

        if(guess>secret){
            printf("too high try again \n");
        }
        else if(guess<secret){
            printf("too low try again \n");
        }
        else{
            printf("correct! you won");
            printf("attempts : %d \n",attempts);
            break;
        }
    }

    
    return 0;
}