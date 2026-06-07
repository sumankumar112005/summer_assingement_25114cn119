//  program to Recursive sum of digits
#include <stdio.h>
// Function to check sum of digit using recursion
int sum_of_digit(int n)
{
    if (n == 0)
       return 0;
    return (n % 10 + sum_of_digit(n / 10));
}
int main()
{
    int num = 12345;
    int result = sum_of_digit(num);
    printf("%d", result);
    return 0;
}
