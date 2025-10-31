//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int n;
    float sum = 0;
    int a = 1, b = 2;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum = sum + (float)a / b;
        a = a + 2;   // next odd number
        b = b + 2;   // next even number
    }

    printf("Approximate sum: %.1f", sum);
    return 0;
}
