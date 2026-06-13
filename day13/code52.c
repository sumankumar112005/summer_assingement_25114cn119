// program to Count even and odd elements in an array

#include <stdio.h>
int main() {
    int arr[10], n, i, evenCount = 0, oddCount = 0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("Number of even elements in array: %d\n", evenCount);
    printf("Number of odd elements in array: %d\n", oddCount);
    return 0;
}