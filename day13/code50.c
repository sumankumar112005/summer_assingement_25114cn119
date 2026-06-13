// a program to Find sum and average of elements in an array

#include <stdio.h>

int main() {
    int arr[10], n, i, sum = 0;
    float average;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = (float)sum / n;
    printf("Sum of elements in array: %d\n", sum);
    printf("Average of elements in array: %.2f\n", average);
    return 0;
}
