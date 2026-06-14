// A program to find the second largest element in an array

#include <stdio.h>
int main() {
    int arr[100], n, i, first = -1, second = -1;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    if (second == -1) {
        printf("There is no second largest element in the array\n");
    } else {
        printf("Second largest element in the array is: %d\n", second);
    }
    return 0;
}