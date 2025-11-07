//Q79: Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    int a[n][m];

    // Input matrix
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);

    // Print diagonals starting from first row
    for(int k=0; k<m; k++) {
        i = 0;
        j = k;
        while(i < n && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    // Print diagonals starting from last column
    for(int k=1; k<n; k++) {
        i = k;
        j = m - 1;
        while(i < n && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}
