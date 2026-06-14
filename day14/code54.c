//  A program to find frequency of an element

#include <stdio.h>
int main() {
    int arr[100], n, i, key, count = 0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to find frequency: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    printf("Frequency of %d is: %d\n", key, count);
    return 0;
}