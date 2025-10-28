#include <stdio.h>
int main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    int sum = 0;
    int odd = 1; 

    for(int i = 1; i <= n; i++) {
        sum += odd;
        odd += 2; 
    }

    printf("Sum of first %d odd numbers: %d\n", n, sum);
    return 0;
}
