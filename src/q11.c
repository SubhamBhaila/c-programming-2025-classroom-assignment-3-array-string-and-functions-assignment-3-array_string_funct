#include <stdio.h>

double calculateAverage(int arr[], int size) {
    int i;
    long sum = 0;

    for (i = 0; i < size; i++) {
        sum += arr[i];
    }

    if (size == 0) {
        return 0.0;
    }

    return (double)sum / size;
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int n = 5;
    double avg = calculateAverage(numbers, n);
    printf("Average = %.2f\n", avg);
    return 0;
}
