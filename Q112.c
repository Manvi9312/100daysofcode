//Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int max_sum, current_sum;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max_sum = current_sum = arr[0];

    for(i = 1; i < n; i++) {
        if(current_sum + arr[i] < arr[i])
            current_sum = arr[i];
        else
            current_sum += arr[i];

        if(current_sum > max_sum)
            max_sum = current_sum;
    }

    printf("%d", max_sum);
    return 0;
}
