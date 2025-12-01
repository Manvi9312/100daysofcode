//Q150: Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student *s;

    // Dynamically allocate memory for one student
    s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input student details using pointer
    printf("Enter Name: ");
    scanf("%s", s->name);

    printf("Enter Roll: ");
    scanf("%d", &s->roll);

    printf("Enter Marks: ");
    scanf("%d", &s->marks);

    // Modify values if needed (example: directly using -> operator)
    // Here we just display the entered values
    printf("\nModified Data: Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll, s->marks);

    // Free allocated memory
    free(s);

    return 0;
}
