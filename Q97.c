//Q97: Print the initials of a name.

#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a name: ");
    gets(str);

    // Print first character as first initial
    if(str[0] != ' ')
        printf("%c.", str[0]);

    // Print initial after every space
    for(i = 1; str[i] != '\0'; i++) {
        if(str[i - 1] == ' ' && str[i] != ' ')
            printf("%c.", str[i]);
    }

    return 0;
}
