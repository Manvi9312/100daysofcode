//Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int n, a[10], i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 0; n > 0; i++) {
        a[i] = n % 2;
        n = n / 2;
    }

    printf("Binary: ");
    for(i = i - 1; i >= 0; i--) {
        printf("%d", a[i]);
    }

    return 0;
}
