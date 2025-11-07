//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include <stdio.h>
#include <ctype.h>  // for tolower() and isalpha()

int main() {
    FILE *fp;
    char filename[100], ch;
    int vowels = 0, consonants = 0;

    // Get file name from user
    printf("Enter file name: ");
    scanf("%s", filename);

    // Open file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot open file!\n");
        return 1;
    }

    // Read each character and count vowels/consonants
    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {  // consider only letters
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
