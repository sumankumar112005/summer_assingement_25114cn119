// a program to Rotate array right
 
#include <stdio.h>
int main() {
    int arr[100], n, d, i;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of positions to rotate right: ");
    scanf("%d", &d);
    d = d % n; // Handle cases where d >= n
    int temp[d];
    for (i = 0; i < d; i++) {
        temp[i] = arr[n - d + i];
    }
    for (i = n - 1; i >= d; i--) {
        arr[i] = arr[i - d];
    }
    for (i = 0; i < d; i++) {
        arr[i] = temp[i];
    }
    printf("Array after right rotation: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
} 
