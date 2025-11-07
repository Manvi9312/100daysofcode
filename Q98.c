//Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, lastSpace = -1;

    printf("Enter a name: ");
    gets(str);

    // Find last space (before surname)
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            lastSpace = i;
    }

    // Print initials before last name
    if(str[0] != ' ')
        printf("%c.", str[0]);

    for(i = 1; i < lastSpace; i++) {
        if(str[i - 1] == ' ' && str[i] != ' ')
            printf("%c.", str[i]);
    }

    // Print surname (last word)
    if(lastSpace != -1)
        printf(" %s", &str[lastSpace + 1]);

    return 0;
}
