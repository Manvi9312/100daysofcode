//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>

int main() {
    int n, i, sum = 0, total;
    int nums[100];

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        sum += nums[i];
    }

    total = n * (n + 1) / 2;  // Sum of numbers from 0 to n
    printf("%d", total - sum); // Missing number

    return 0;
}
