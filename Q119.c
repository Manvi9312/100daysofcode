//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int n, i, num;
    int nums[100], seen[100] = {0};

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &num);

        if(seen[num] == 1) {
            printf("%d", num); // Repeated element found
            return 0;
        }
        seen[num] = 1;
    }

    return 0;
}
