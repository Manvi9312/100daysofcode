//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks, n;

    // ===== Writing to file =====
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter Name: ");
        scanf("%s", name);
        printf("Enter Roll: ");
        scanf("%d", &roll);
        printf("Enter Marks: ");
        scanf("%d", &marks);

        // Write to file
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    // ===== Reading from file =====
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\n--- Student Records ---\n");

    // Read until EOF
    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
