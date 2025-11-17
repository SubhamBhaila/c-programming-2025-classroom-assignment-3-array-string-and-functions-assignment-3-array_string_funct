// Implement a C program to reverse a string.#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;

    printf("Enter a string: ");
    scanf("%s", str);

    length = 0;
    while (str[length] != '\0') {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
