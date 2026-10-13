/*
Day 13 - palindrome and reverse string
Author - uma
Date - 13-10-2026
*/

#include <stdio.h>
#include <string.h>
int main(){
    char str[100], reverse[100];
    int i, length, j = 0, palindrome = 1;
    printf("enter a word : ");
    scanf("%99s",str);

    length = strlen(str);
    

    //---------REVERSE STRING---------
    for(i=length-1 ; i>=0 ; i--){
        reverse[j] = str[i];
        j++;
    }
    reverse[j] ='\0';

    printf("reversed string = %s\n",reverse);
    

    //--------CHECK PALINDROME------
    for(i=0 ; i<length ; i++){
        if (str[i] != reverse[i]){
            palindrome = 0;
            break;
        }
    }

    if(palindrome == 1){
        printf("it is a palindrome ");
    }
    else{
        printf("it is not a palindrome");
    }

    return 0;

}

/*
-------SAMPLE OUTPUT---------

enter a word : madam
reversed string = madam
it is a palindrome 

-------WHAT I LEARNED--------
1. strings can be reversed using a for loop
2. strlen() gives the length of a string
3. a palindrome reads the same forward an dbackward
4. break stops the loop when a mismatch is found
*/