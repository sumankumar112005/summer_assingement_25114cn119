// a program to Compress a string
#include <stdio.h>
#include <string.h>

void compressString(char str[]) {
    int i, j, k = 0;
    int len = strlen(str);
    char compressed[2 * len]; // Assuming maximum possible length

    for (i = 0; i < len; i++) {
        int count = 1;
        for (j = i + 1; j < len && str[j] == str[i]; j++) {
            count++;
        }
        compressed[k++] = str[i];
        if (count > 1) {
            int temp[10], digitCount = 0;
            while (count > 0) {
                temp[digitCount++] = count % 10;
                count /= 10;
            }
            for (int l = digitCount - 1; l >= 0; l--) {
                compressed[k++] = temp[l] + '0';
            }
        }
        i = j - 1;
    }
    compressed[k] = '\0';
    strcpy(str, compressed);
}