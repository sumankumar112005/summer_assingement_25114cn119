// a program to Find longest word
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], longest[100];
    int i, j, start, end, maxLength = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            start = i;
            while (str[i] != ' ' && str[i] != '\0') {
                i++;
            }
            end = i - 1;
            if (end - start + 1 > maxLength) {
                maxLength = end - start + 1;
                for (j = 0; j <= end - start; j++) {
                    longest[j] = str[start + j];
                }
                longest[j] = '\0';
            }
        }
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLength);

    return 0;
}