// a program to Create menu-driven string operation system

#include <stdio.h>
#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int choice, i, length;

    printf("Enter a string (max %d characters): ", MAX_SIZE - 1);
    scanf(" %[^\n]%*c", str); // To read string with spaces

    do {
        printf("\nMenu:\n");
        printf("1. Display String\n");
        printf("2. Find Length of String\n");
        printf("3. Reverse String\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("String: %s\n", str);
                break;
            case 2:
                length = 0;
                while (str[length] != '\0') {
                    length++;
                }
                printf("Length of the string: %d\n", length);
                break;
            case 3:
                length = 0;
                while (str[length] != '\0') {
                    length++;
                }
                printf("Reversed string: ");
                for (i = length - 1; i >= 0; i--) {
                    putchar(str[i]);
                }
                printf("\n");
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                break;  
            default:
                printf("Invalid choice. Please try again.\n");  
        }
    } while (choice != 4);  
    return 0;
}
