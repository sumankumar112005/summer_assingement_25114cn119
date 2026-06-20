// a program to find row wise sum of matrix.

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
    // Calculate row-wise sum
    for (i = 0; i < r; i++) {
        int rowSum = 0;
        for (j = 0; j < c; j++) {
            rowSum += a[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, rowSum);
    }
    return 0;
}