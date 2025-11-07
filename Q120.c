//Q120: Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *infile, *outfile;
    char ch, prev = ' ';

    infile = fopen("input.txt", "r");
    outfile = fopen("output.txt", "w");

    if (infile == NULL || outfile == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(infile)) != EOF) {
        if (prev == ' ' || prev == '\n' || prev == '\t') {
            ch = toupper(ch);
        } else {
            ch = tolower(ch);
        }

        fputc(ch, outfile);
        prev = ch;
    }

    fclose(infile);
    fclose(outfile);

    printf("Sentence case conversion complete. Check output.txt\n");
    return 0;
}
