#include <stdio.h>

int calculateGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    int gcd = calculateGCD(x, y);
    printf("GCD = %d\n", gcd);

    return 0;
}
// Write a function named calculateGCD that takes two integers as input and returns their greatest common divisor (GCD).
