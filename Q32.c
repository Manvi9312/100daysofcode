//Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int n, rev = 0, rem, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n; // store original number

    while(n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if(temp == rev)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
