//Q43: Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int num, temp, digit, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp > 0) {
        digit = temp % 10;       // get last digit
        fact = 1;

        for(int i = 1; i <= digit; i++)   // find factorial of digit
            fact = fact * i;

        sum = sum + fact;
        temp = temp / 10;
    }

    if(sum == num)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}
