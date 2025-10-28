// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>   // for pow()

int main() {
    float principal = 1000;   // example value
    float rate = 10;          // 10% rate
    float time = 2;           // 2 years

    float simple_interest, compound_interest, amount;

    // Simple Interest
    simple_interest = (principal * rate * time) / 100;

    // Compound Interest
    amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;

    // Output
    printf("Principal = %.2f\n", principal);
    printf("Rate = %.2f%%\n", rate);
    printf("Time = %.2f years\n", time);
    printf("Simple Interest = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);

    return 0;
}
