// program to Print number pyramid
 
#include <stdio.h>

int main() {
    int n = 5;

    // Outer loop to print all rows
    for (int i = 0; i < n; i++) {

        // First inner loop to print leading white spaces
        for (int j = 0; j < 2 * (n - i - 1); j++)
            printf(" ");

        // Second inner loop to print star * character
        for (int k = 0; k < 2 * i + 1; k++)
            printf("%d ", k + 1);
        printf("\n");
    }
    return 0;
}

    //    1
    //   123
    //  12345
    // 1234567   
