//Q38: Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0) {
        sum = sum + n % 10;  // add last digit
        n = n / 10;          // remove last digit
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
