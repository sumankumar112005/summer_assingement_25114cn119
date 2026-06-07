// A program to Recursive Fibonacci
#include <stdio.h>

int nthFibo(int n){   
    // Base case
    if (n <= 1){
        return n;
    } 
    // Recursive case
    return nthFibo(n - 1) + nthFibo(n - 2);
}
int main(){
    int n = 5;
    int result = nthFibo(n);
    printf("%d\n", result);
    return 0;
}


