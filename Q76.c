//Q76: Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int a[2][2], i, j, flag = 1;

    // Input 2x2 matrix
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);

    // Check symmetry
    if(a[0][1] != a[1][0])
        flag = 0;

    if(flag == 1)
        printf("True");
    else
        printf("False");

    return 0;
}
