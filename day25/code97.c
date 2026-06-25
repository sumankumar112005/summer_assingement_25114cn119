// a program to Merge two sorted array 

#include <stdio.h>
int main() {
    int arr1[10], arr2[10], merged[20];
    int n1, n2, i, j, k;

    printf("Enter the number of elements in first sorted array: ");
    scanf("%d", &n1);
    printf("Enter the elements of first sorted array: ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in second sorted array: ");
    scanf("%d", &n2);
    printf("Enter the elements of second sorted array: ");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    i = 0; j = 0; k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < n1) {
        merged[k++] = arr1[i++];
    }

    while (j < n2) {
        merged[k++] = arr2[j++];
    }

    printf("Merged sorted array: ");
    for (i = 0; i < k; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
