// program to Print reverse pyramid. 

#include <stdio.h>

int main() {
    int n = 5;

    // First loop for printing all rows
    for (int i = 0; i < n; i++) {

        // First inner loop for printing leading white
        // spaces
        for (int j = 0; j < 2 * i; j++) {
            printf(" ");
        }

        // Second inner loop for printing stars *
        for (int k = 0; k < 2 * (n - i) - 1; k++) {
            printf("* ");
        }
        printf("\n");
    }
}

    //    *******
    //     *****
    //      ***
    //       *