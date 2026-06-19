// a program to Find diagonal sum
#include <stdio.h>
int main() {
    int A[10][10];
    int m, n, i, j;
    int sum = 0;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    // Finding the sum of diagonal elements
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                sum += A[i][j];
            }
        }
    }
    printf("Sum of diagonal elements: %d\n", sum);
    return 0;
}
