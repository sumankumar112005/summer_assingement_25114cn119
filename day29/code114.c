// a program to Create menu-driven array operation system

#include <stdio.h>
#define MAX_SIZE 100    

int main() {
    int arr[MAX_SIZE];
    int n, choice, i, element, position;

    printf("Enter the number of elements in the array (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\nMenu:\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Array elements: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 2:
                if (n >= MAX_SIZE) {
                    printf("Array is full. Cannot insert new element.\n");
                    break;
                }
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                printf("Enter the position to insert (0 to %d): ", n);
                scanf("%d", &position);
                if (position < 0 || position > n) {
                    printf("Invalid position.\n");
                    break;
                }
                for (i = n; i > position; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[position] = element;
                n++;
                printf("Element inserted successfully.\n");
                break;
            case 3:
                if (n <= 0) {
                    printf("Array is empty. Cannot delete element.\n");
                    break;
                }
                printf("Enter the position to delete (0 to %d): ", n - 1);
                scanf("%d", &position);
                if (position < 0 || position >= n) {
                    printf("Invalid position.\n");
                    break;
                }
                for (i = position; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                printf("Element deleted successfully.\n");
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
