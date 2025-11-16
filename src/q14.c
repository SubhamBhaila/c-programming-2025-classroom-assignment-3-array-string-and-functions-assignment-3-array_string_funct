#include <stdio.h>

float convertTemperature(float celsius) {
    float fahrenheit;
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    return fahrenheit;
}

int main() {
    float celsius;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    printf("Temperature in Fahrenheit = %.2f\n", convertTemperature(celsius));

    return 0;
}
