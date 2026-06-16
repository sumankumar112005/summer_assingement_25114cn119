// a program to Remove duplicates from an array
#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int newSize = n;
    for (int i = 0; i < newSize; i++) {
        for (int j = i + 1; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < newSize - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                newSize--;
                j--;
            }
        }
    }
    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
