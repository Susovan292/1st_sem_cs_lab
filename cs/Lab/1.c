// Assignment 1
// Q1. Write a program in C to calculate the square of a number if it is odd or cube if it is even.

#include <stdio.h>

int main() {
    int max, i;
    printf("Enter the number upto which the square of even numbers and cube of odd numbers to be printed : ");
    scanf("%d", &max);
    for (i = 1 ; i <= max ; i++) {
        if (i%2!=0) {
            printf("%d\n", i*i);
        } 
        else {
            printf("%d\n", i*i*i);
        }
    }
    return 0;
}
