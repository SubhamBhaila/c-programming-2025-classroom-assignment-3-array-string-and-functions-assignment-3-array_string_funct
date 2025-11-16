// Write a function named findFactorial that takes an integer as input and returns its factorial.
#include <stdio.h>

long long findFactorial(int n) {
    long long fact = 1;
    int i;

    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d = %lld\n", n, findFactorial(n));
    }

    return 0;
}
