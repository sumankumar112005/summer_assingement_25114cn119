// a program to Find column-wise sum.

#include <stdio.h>
int main() {
    int a[10][10], i, j, r, c;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    // Calculate column-wise sum
    for (j = 0; j < c; j++) {
        int colSum = 0;
        for (i = 0; i < r; i++) {
            colSum += a[i][j];
        }
        printf("Sum of column %d = %d\n", j + 1, colSum);
    }
    return 0;
}

