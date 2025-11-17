#include <stdio.h>

// Function to calculate and print factorial series up to n
void calculateFactorialSeries(int n) {
    int i;
    long long fact = 1;  // use long long to handle bigger values

    printf("Factorial series up to %d:\n", n);
    for (i = 1; i <= n; i++) {
        fact = fact * i;      // update factorial
        printf("%lld ", fact); // print current factorial
    }
    printf("\n");
}

// Example main function to test
int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    calculateFactorialSeries(n);

    return 0;
}
