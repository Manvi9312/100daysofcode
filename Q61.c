//Q61: Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int n, key, i;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter number to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(a[i] == key) {
            printf("Found at index %d", i);
            return 0;
        }
    }

    printf("-1");
    return 0;
}
