//Q78: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    scanf("%d", &n);
    int a[n][n];

    // Input matrix
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    // Sum of main diagonal
    for(i=0;i<n;i++)
        sum += a[i][i];

    printf("%d", sum);
    return 0;
}
