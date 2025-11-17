// Implement a C program to count the occurrence of a specific character in a string.#include <stdio.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter a character to count: ");
    scanf(" %c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }

    printf("Character '%c' occurs %d times in the string.\n", ch, count);

    return 0;
}
