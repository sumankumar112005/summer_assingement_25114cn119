// A program to find duplicates in an array. Amazon, Deloitte, Capgemini

#include <stdio.h>
int main() {
    int arr[100], n, i, j, found = 0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements in the array are: ");
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                found = 1;
                break;
            }
        }
    }
    if (!found) {
        printf("No duplicates found in the array\n");
    }
    return 0;
}
