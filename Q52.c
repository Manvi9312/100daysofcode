/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/

#include <stdio.h>

int main() {
    int i, j;

    // 1st block
    for(i = 1; i <= 1; i++) {
        printf("*\n");
    }
    printf("\n");

    // 2nd block
    for(i = 1; i <= 3; i++) {
        printf("*\n");
    }
    printf("\n");

    // 3rd block
    for(i = 1; i <= 5; i++) {
        printf("*\n");
    }
    printf("\n");

    // 4th block
    for(i = 1; i <= 3; i++) {
        printf("*\n");
    }
    printf("\n");

    // 5th block
    for(i = 1; i <= 1; i++) {
        printf("*\n");
    }

    return 0;
}

