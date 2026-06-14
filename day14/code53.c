// a program to Linear search


#include <stdio.h>
int main() {    
    int arr[100], n, i, key, found = 0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            break;  
        }
    }
    if (found) {
        printf("Element found at index %d\n", i);
    } else {
        printf("Element not found in the array\n");
    }
    return 0;
}