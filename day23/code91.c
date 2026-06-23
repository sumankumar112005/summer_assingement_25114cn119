// a program to Check anagram strings
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, j, flag = 1;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Strings are not anagrams.\n");
        return 0;
    }

    for (i = 0; str1[i] != '\0'; i++) {
        flag = 0;
        for (j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                flag = 1;
                str2[j] = '\0'; // Mark as visited
                break;
            }
        }
        if (flag == 0) {
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }

    printf("Strings are anagrams.\n");
    return 0;
}
