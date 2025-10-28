// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main() {
    int n;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Using nested if-else
    if (n >= 0) {
        if (n == 0) {
            printf("Zero\n");
        } else {
            printf("Positive\n");
        }
    } else {
        printf("Negative\n");
    }

    return 0;
}
