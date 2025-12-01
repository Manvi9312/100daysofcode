//Q147: Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp;
    FILE *fp;

    // Input employee details
    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    // Write to binary file
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Read from binary file
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    fread(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Display employee data
    printf("\nEmployee Details Read from File:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}
