// a program to Sort names alphabetically

#include <stdio.h>
#include <string.h>
int main() {
    char names[10][50], temp[50];
    int i, j, n;

    printf("Enter the number of names: ");
    scanf("%d", &n);
    getchar(); // to consume the newline character after scanf

    printf("Enter the names:\n");
    for (i = 0; i < n; i++) {
        fgets(names[i], sizeof(names[i]), stdin);
        // Remove newline character if present
        size_t len = strlen(names[i]);
        if (len > 0 && names[i][len - 1] == '\n') {
            names[i][len - 1] = '\0';
        }
    }

    // Sorting names alphabetically
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("Sorted names:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
