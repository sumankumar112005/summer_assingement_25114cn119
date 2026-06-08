// a program to Print repeated-number pattern
// 1
// 22
// 333
// 4444
// 55555
#include <stdio.h>
int main() {
    int i, j;
    // Outer loop for the number of rows
    for (i = 1; i <= 5; i++) {
        // Inner loop to print the number 'i' exactly 'i' times
        for (j = 1; j <= i; j++) {
            printf("%d", i);
        }
        // Move to the next line after each row
        printf("\n");
    }
    return 0;
}