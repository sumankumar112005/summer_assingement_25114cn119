// a program to Find common characters in strings

#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int i, j, flag;

    printf("Enter first string: ");
    gets(str1);          

    printf("Enter second string: ");
    gets(str2);          

    printf("Common characters: ");
    for (i = 0; str1[i] != '\0'; i++) {
        flag = 0;
        for (j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            printf("%c ", str1[i]);
        }
    }
    printf("\n");

    return 0;
}
