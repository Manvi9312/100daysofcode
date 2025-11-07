//Q62: Reverse an array without taking extra space.

#include <stdio.h>

int main() {
    int n, i, temp;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Reverse the array in-place
    for(i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }

    printf("Reversed array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
