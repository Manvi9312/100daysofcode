//Q77: Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int n, i, j, flag = 1;
    scanf("%d", &n);
    int a[n][n];

    // Input matrix
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    // Check distinct diagonal elements
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i][i] == a[j][j])
                flag = 0;
        }
    }

    if(flag == 1)
        printf("True");
    else
        printf("False");

    return 0;
}
