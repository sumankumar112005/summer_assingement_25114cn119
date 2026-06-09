// program to Print reverse number triangle
// 12345
// 1234
// 123
// 12
// 1

#include <stdio.h>

int main()
{
    int rows = 5;

    // Outer loop to print all rows
    for (int i = 0; i < rows; i++)
    {

        // Inner loop to print the * in each row
        for (int j = 0; j < rows - i; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}