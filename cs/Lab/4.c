// Assignment 2
// Q1. Write a program in C to calculate the sum of the digits of a number.

#include <stdio.h>

int main() {
    int n, m, sum=0;

    printf("Enter a number : ");
    scanf("%d", &n);

    while (n > 0) {
        m = n%10;
        sum = sum+m;
        n = n/10;
    }
    printf("Sum is = %d\n\n", sum);
    return 0;
}