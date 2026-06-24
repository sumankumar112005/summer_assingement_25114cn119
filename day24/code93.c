// a program to Check string rotation 

#include <stdio.h>
int isRotation(char str1[], char str2[]) {
    int i, j, len1 = 0, len2 = 0;
    // Calculate lengths of both strings
    while (str1[len1] != '\0') {
        len1++;
    }
    while (str2[len2] != '\0') {
        len2++;
    }
    // If lengths are not equal, they cannot be rotations
    if (len1 != len2) {
        return 0;
    }
    // Check for rotation
    for (i = 0; i < len1; i++) {
        for (j = 0; j < len2; j++) {
            if (str1[(i + j) % len1] != str2[j]) {
                break;
            }
        }
        if (j == len2) {
            return 1; // str2 is a rotation of str1
        }
    }
    return 0; // str2 is not a rotation of str1
}