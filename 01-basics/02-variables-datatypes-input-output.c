/*
* Day 02 - variables, data types, printf and scanf in c
* Topic - variables,data types, input and output
* Author - Uma
* Date - 2-10-2026
*/

#include <stdio.h>
int main(){

    // variables and data types
    int age = 17;
    float height = 5.6;
    char grade = 'A';

    // printing variables using printf()
    printf("age : %d \n", age);
    printf("height : %.1f \n",height);
    printf("grade : %c \n", grade);

    // Taking input using scanf()
    int num;
    float marks;

    printf("enter a number : ");
    scanf("%d",&num);

    printf("enter your marks : ");
    scanf("%f",&marks);

    // Displaying user inputs
    printf("you entered number : %d \n",num);
    printf("you entered marks : %f \n",marks);

    return 0;


}

/*
----SAMPLE OUTPUT----

age : 17
height : 5.6
grade : A

enter a number : 25
enter your marks : 95.0

you entered number : 25
you entered marks : 95.0


----WHAT I LEARNED----

1. variables are used to store data
2. int is used to store whole numbers
3. float is used to store decimal numbers
4. char is used to store a single character
5. printf() is used to display output
6. scanf() is used to take input from the user
7. %d is used for int
8. %f is used for float
9. %c is used for char
10. & is used with scanf() to give the variables's address
*/