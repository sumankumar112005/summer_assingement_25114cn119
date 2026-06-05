#include <stdio.h>
int main() {
    double base, result = 1.0;
    int exp, i;
    printf("Enter base (x): ");
    scanf("%lf", &base);
    printf("Enter exponent (n): ");
    scanf("%d", &exp);
    int positive_exp = (exp < 0) ? -exp : exp;
    for (i = 1; i <= positive_exp; i++) {
        result *= base;
    }
    if (exp < 0) {
        result = 1.0 / result;
    }
    printf("%.2lf^%d = %.6lf\n", base, exp, result);
    return 0;
}