// a program to Remove duplicate characters
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j, k = 0;
    int len;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';
    len = strlen(str);
    for (i = 0; i < len; i++) {
        for (j = 0; j < k; j++) {
            if (str[i] == str[j]) {
                break;
            }
        }
        if (j == k) {
            str[k++] = str[i];
        }
    }
    str[k] = '\0';
    printf("String after removing duplicates: %s\n", str);
    return 0;
}
