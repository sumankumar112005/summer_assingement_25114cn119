// program to Print character triangle.
// A
// AB
// ABC
// ABCD
// ABCDE
#include <stdio.h>
int main() {
    int rows = 5;
    char ch;
    // Outer loop for each row
    for(int i = 1; i <= rows; i++) {
        // Start alphabet from 'A'
        ch = 'A'; 
        // Inner loop prints alphabets in a row
        for(int j = 1; j <= i; j++) {
            printf("%c ", ch);
            // Move to next alphabet
            ch++; 
        }
        // Move to next row
        printf("\n"); 
    }
    return 0;
}
