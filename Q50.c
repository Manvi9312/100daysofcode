/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/

#include <stdio.h>

int main() {
    int i, j, k;

    for(i = 1; i <= 5; i++) {          // rows
        for(j = 1; j < i; j++)         // print spaces
            printf(" ");
        for(k = i; k <= 5; k++)        // print stars
            printf("*");
        printf("\n");
    }

    return 0;
}
