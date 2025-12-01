//Q140: Define a struct with enum Gender and print person's gender.

#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    enum Gender gender;
};

int main() {
    char input[20];
    struct Person p;

    printf("Enter Gender (MALE / FEMALE / OTHER): ");
    scanf("%s", input);

    // Convert string to enum value
    if (strcmp(input, "MALE") == 0)
        p.gender = MALE;
    else if (strcmp(input, "FEMALE") == 0)
        p.gender = FEMALE;
    else if (strcmp(input, "OTHER") == 0)
        p.gender = OTHER;
    else {
        printf("Invalid input\n");
        return 1;
    }

    // Print output
    switch (p.gender) {
        case MALE:   printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER:  printf("Other\n"); break;
    }

    return 0;
}
