/*
** Day 04 - if-else and switch case
* Topic - if-else,switch case, even/odd and largest of 3 numbers
* Author - Uma
* Date - 04-10-2026
*/

#include <stdio.h>
int main(){
    int num;
    int a,b,c;
    int choice;
    
    //---------------SWITCH CASE---------------

    printf("choose an option(1 or 2) : \n");
    printf("1. check even/odd \n");
    printf("2. find largest of 3 numbers \n");
    printf("enter your choice : \n");
    scanf("%d",&choice);

    switch(choice){

        //-------------EVEN OR ODD-------------------
        case 1:
           printf("you selected even/odd checking. \n");

           printf("enter a number : ");
           scanf("%d",&num);

           if(num % 2 == 0){
                printf("%d is even \n",num);
           }
            else{
                printf("%d is odd \n",num);
           }

           break;

        
        //----------------LARGEST OF THREE-----------------
        case 2:
           printf("you selected largest of 3 numbers \n");

           printf("enter three numbers  : ");
           scanf("%d %d %d",&a,&b,&c);

           if(a >= b && a>=c){
                printf("largest number is : %d \n",a);
           }
           else if(b>=a && b>=c){
                printf("largest number is : %d \n",b);
           }
            else{
                printf("largest number is : %d \n",c);
           }

           break;

        default:
           printf("INVALID choice \n");
    }

    return 0;
}

/*
-----------SAMPLE OUTPUT 1----------

choose an option(1 or 2) : 
1. check even/odd 
2. find largest of 3 numbers 

enter your choice : 1

you selected even/odd checking. 
enter a number : 2
2 is even 

------------SAMPLE OUTPUT 2--------------

choose an option(1 or 2) : 
1. check even/odd 
2. find largest of 3 numbers 

enter your choice : 2

you selected largest of 3 numbers 
enter three numbers  : 4  5  6
largest number is : 6 

-------------SAMPLE OUTPUT 3----------

choose an option(1 or 2) :
1. check even/odd
2. find largest of 3 numbers

enter your choice : 3

INVALID choice 

----------WHAT I LEARNED------------

1. switch is used to select one option from multiple choices
2. case is used to define different choices in switch
3. break is used to stop a case from continuing
4. default runs when no case matches
5. if-else is used for decision making
6. if runs when condition is true
7. else runs when condition is false
8. else if is used to check multiple conditions
9. % gives the remaindr of a division
10. a number is even if num % 2 == 0
11. a number is odd if num % 2 != 0
12. && is the logical AND operator
13. if-else can also be used inside a switch

*/