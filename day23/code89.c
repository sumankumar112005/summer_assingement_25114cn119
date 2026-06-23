// a program to Find first non-repeating character in a string

#include <stdio.h>
int main() {
    char str[100];
    int i, j, flag;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        flag = 0;
        for (j = 0; str[j] != '\0'; j++) {
            if (str[i] == str[j] && i != j) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf("First non-repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");
    return 0;
}
