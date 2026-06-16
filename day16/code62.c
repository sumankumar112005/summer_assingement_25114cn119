
// a program to Find maximum frequency element in an array
#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxFreq = 0;
    int maxElement = arr[0];
    for (int i = 0; i < n; i++) {
        int freq = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq++;
            }
        }
        if (freq > maxFreq) {
            maxFreq = freq;
            maxElement = arr[i];
        }
    }
    printf("The element with maximum frequency is: %d\n", maxElement);
    return 0;
}