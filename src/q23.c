// Write a recursive function named calculateGCD that takes two integers a and b as input and returns their greatest common divisor (GCD).#include <stdio.h>

int calculateGCD(int a, int b) {
    if (b == 0)
        return a;
    return calculateGCD(b, a % b);
}

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    int gcd = calculateGCD(x, y);
    printf("GCD = %d\n", gcd);

    return 0;
}
