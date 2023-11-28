/* 
Assignment 2
Q4. Write a program in C to calculate the factorial of a given number. 
*/

#include <stdio.h>

void main() {
    int i, num, f=1;

    printf("Input the number : ");
    scanf("%d", &num);

    for (i = 1 ; i <= num ; i++) 
        f = f*i;

    printf("The factorial of %d is %d \n\n", num, f);

}
