/* 
Assignment 2
Q2. Write a program in C to display a pattern like a right angle triangle using a astrisk. 
The pattern Like :  
*
* *
* * *
* * * *
* * * * *

*/

#include <stdio.h>

void main() {
    int i, j, rows;
    printf("Input numbers of rows : ");
    scanf("%d", &rows);
    for (i=1 ; i<=rows ; i++) {
        for (j = 1 ; j <= i ; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
}