//Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

#include <stdio.h>

int main() {
    FILE *fp;
    char line[100];  // buffer to store each line

    // Open the file in read mode
    fp = fopen("info.txt", "r");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error: File not found or unable to open!\n");
        return 1;
    }

    // Read each line using fgets() until EOF
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(fp);

    return 0;
}
