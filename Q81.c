//Q81: Count characters in a string without using built-in length functions.

#include <stdio.h>

int main() {
    char str[100];
    int i, count = 0;

    gets(str);  // Read string

    for(i = 0; str[i] != '\0'; i++)
        count++;

    printf("%d", count);
    return 0;
}
