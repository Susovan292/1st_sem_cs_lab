#include <stdio.h>

void addsub(int a, int b, int *sum, int *diff) {
    *sum = a + b;
    *diff = a - b;
}

int main() {
    int num1, num2, sum, diff;

    // Input two integers
    printf("Enter first integer : ");
    scanf("%d", &num1);

    printf("Enter second integer : ");
    scanf("%d", &num2);

    // call addsub function
    addsub(num1, num2, &sum, &diff);

    //print result
    printf("Sum : %d\n", sum);
    printf("Difference : %d\n\n", diff);

}
