//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[200];

    // Get file name from user
    printf("Enter file name: ");
    scanf("%s", filename);

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Cannot open file!\n");
        return 1;
    }

    // Clear input buffer before taking line input
    getchar();  

    // Get text from user
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append text to the file
    fputs(text, fp);

    printf("File updated successfully with appended text.\n");

    // Close file
    fclose(fp);

    return 0;
}
