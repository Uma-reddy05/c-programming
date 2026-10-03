/*
* Day 03 - operators in c
* Topic - arithmetic,relational and logical
* Author - Uma 
* Date - 03-10-2026
*/

#include <stdio.h>
int main(){
    
    int a = 20;
    int b = 10;

    // ----------ARITHMETIC OPERATORS----------
    printf("----ARITHMETIC OPERATORS---- \n");
    printf("Addition : %d \n",a+b);
    printf("Subtraction : %d \n", a-b);
    printf("multiplication : %d \n",a*b);
    printf("Division : %d \n",a/b);
    printf("Remainder : %d \n",a%b);

    // ----------RELATIONAL OPERATORS----------
    printf("----RELATIONAL OPERATORS----\n");
    printf("a == b : %d \n",a == b);
    printf("a != b : %d \n",a != b);
    printf("a > b : %d \n",a > b);
    printf("a < b : %d \n",a < b);
    printf("a >= b : %d \n",a >= b);
    printf("a <= b : %d \n",a <= b);

    //----------LOGICAL OPERATORS----------
    printf("----LOGICAL OPERATORS----\n");
    printf("(a>10 && b>5) : %d \n",a>10 && b>5);
    printf("(a>25 || b>5) : %d \n",a>25 || b>5);
    printf("!(a==b) : %d \n",!(a==b));
    
    return 0;

}

/*
-------SAMPLE OUTPUT------

-----ARITHMETIC OPERATORS-----
Addition : 30
Subtraction : 10
Multipliction : 200
division : 2
Remainder : 0

-----RELATIONAL OPERATORS-----
a == b : 0
a != b : 1
a > b : 1
a < b : 0
a >= b : 1
a <= b : 0

-----LOGICAL OPERATORS-----
(a>10 && b>5) : 1
(a>25 || b>5) : 1
!(a==b) : 1

--------WHAT I LEARNED--------
1. arithmetic operators are used for mathematical calculations
2. + is used for addition
3. - is used for subtraction
4. * is used for multiplication
5. / is used for division
6. % is used to find remainder
7. relational operators are used to compare values
8. == checks whether two values are equal
9. != checks whether two values are not equal
10. >,<,>= and <= are used for comparisons
11. logical operators are used to combine conditions
12. && means AND
13. || means OR
14. ! means NOT
15. in c, 1 means true and 0 means false

*/