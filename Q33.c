//Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>

int main() {
    int n, sum = 0, rem, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n; // store original number

    while(n > 0) {
        rem = n % 10;            // get last digit
        sum = sum + rem * rem * rem; // cube each digit and add
        n = n / 10;              // remove last digit
    }

    if(temp == sum)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
