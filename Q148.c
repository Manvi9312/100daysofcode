//Q148: Take two structs as input and check if they are identical.

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function to check if two students are identical
int isSame(struct Student s1, struct Student s2) {
    if (strcmp(s1.name, s2.name) == 0 && s1.roll == s2.roll && s1.marks == s2.marks)
        return 1;
    else
        return 0;
}

int main() {
    struct Student s1, s2;

    // Input first student
    printf("Enter details of Student 1:\n");
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Roll: ");
    scanf("%d", &s1.roll);
    printf("Marks: ");
    scanf("%d", &s1.marks);

    // Input second student
    printf("\nEnter details of Student 2:\n");
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Roll: ");
    scanf("%d", &s2.roll);
    printf("Marks: ");
    scanf("%d", &s2.marks);

    // Compare
    if (isSame(s1, s2))
        printf("\nSame\n");
    else
        printf("\nDifferent\n");

    return 0;
}
