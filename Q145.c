//Q145: Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function to find and return the student with highest marks
struct Student getTopStudent(struct Student s[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }
    return s[maxIndex];
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    // Get top student
    struct Student topper = getTopStudent(s, n);

    // Print top student details
    printf("\nTop Student: %s | Roll: %d | Marks: %d\n", topper.name, topper.roll, topper.marks);

    return 0;
}
