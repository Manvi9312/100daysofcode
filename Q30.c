#include <stdio.h>

int main() {
    int n, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    int i = n;
   
    while (i > 0) {
        fact = fact * i;  
        i--;              
    }

    printf("Factorial of %d is: %d\n", n, fact);

    return 0;
}
