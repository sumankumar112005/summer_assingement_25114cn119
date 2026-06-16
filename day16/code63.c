// a program to Find pair with given sum
#include <stdio.h>
int main() {
    int arr[] = {2, 4, 3, 5, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 7;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
            }
        }
    }
    return 0;
}