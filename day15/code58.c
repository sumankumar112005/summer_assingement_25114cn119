 
 // a program to Rotate array left.
 
#include <stdio.h>
int main() {
    int arr[100], n, d, i;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of positions to rotate left: ");
    scanf("%d", &d);
    d = d % n; // Handle cases where d >= n
    int temp[d];
    for (i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    for (i = 0; i < n - d; i++) {
        arr[i] = arr[i + d];
    }
    for (i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
    printf("Array after left rotation: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
} 
