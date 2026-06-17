// a program to Union of arrays
#include <stdio.h>
int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int union_arr[size1 + size2];
    int i, j, k;
    k = 0;
    // Copy elements from first array
    for (i = 0; i < size1; i++) {
        union_arr[k++] = arr1[i];
    }
    // Add elements from second array if not already present
    for (i = 0; i < size2; i++) {
        int found = 0;
        for (j = 0; j < size1; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            union_arr[k++] = arr2[i];
        }
    }
    // Print the union array
    printf("Union array: ");
    for (i = 0; i < k; i++) {
        printf("%d ", union_arr[i]);
    }
    printf("\n");
    return 0;
}
