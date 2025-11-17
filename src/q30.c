#include <stdio.h>
#include <string.h>

int countOccurrences(char str[], char ch, int index) {
    if (str[index] == '\0')
        return 0;
    if (str[index] == ch)
        return 1 + countOccurrences(str, ch, index + 1);
    return countOccurrences(str, ch, index + 1);
}

int main() {
    char str[100], ch;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter a character to count: ");
    scanf(" %c", &ch);

    int count = countOccurrences(str, ch, 0);
    printf("Character '%c' occurs %d times in the string.\n", ch, count);

    return 0;
}
