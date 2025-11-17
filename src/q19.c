#include <stdio.h>

void calculateFactorialSeries(int n) {
    int i;
    long long fact = 1;
    for (i = 1; i <= n; i++) {
        fact = fact * i;
        printf("%lld ", fact);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    calculateFactorialSeries(n);
    return 0;
}
