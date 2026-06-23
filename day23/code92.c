// a program to Find maximum occurring character in a string

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, maxCount = 0, maxChar;
    int count[256] = {0}; // Array to store count of each character

    printf("Enter a string: ");
    gets(str);

    // Count occurrences of each character
    for (i = 0; str[i] != '\0'; i++) {
        count[str[i]]++;
    }

    // Find the character with maximum count
    for (i = 0; i < 256; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxChar = i;
        }
    }

    printf("Maximum occurring character: %c\n", maxChar);
    printf("Occurrences: %d\n", maxCount);
    return 0;
}
