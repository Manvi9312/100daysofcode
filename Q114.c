//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j, k, len, maxLen = 0, found;

    printf("Enter a string: ");
    gets(s);

    len = strlen(s);

    for(i = 0; i < len; i++) {
        int freq[256] = {0};  // to track characters
        for(j = i; j < len; j++) {
            if(freq[s[j]] == 1)  // character repeated
                break;
            freq[s[j]] = 1;
            if(j - i + 1 > maxLen)
                maxLen = j - i + 1;
        }
    }

    printf("%d", maxLen);
    return 0;
}
