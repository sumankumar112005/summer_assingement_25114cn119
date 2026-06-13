// a program to Find largest and smallest elements in an array
  
#include <stdio.h>
int main() {
    int arr[10], n, i, largest, smallest;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    largest = smallest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    printf("Largest element in array: %d\n", largest);
    printf("Smallest element in array: %d\n", smallest);
    return 0;
}
