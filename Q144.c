//Q144: Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function to print student details
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student s;

    // Input student details
    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Roll: ");
    scanf("%d", &s.roll);

    printf("Enter Marks: ");
    scanf("%d", &s.marks);

    // Call function to print
    printStudent(s);

    return 0;
}
