#include <stdio.h>

int countOccurrences(const char *str, char ch) {
    int count = 0;
    int i = 0;
    
    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }
    
    return count;
}

int main() {
    char text[] = "hello world";
    char character = 'l';
    
    int result = countOccurrences(text, character);
    printf("The character '%c' appears %d times.\n", character, result);
    
    return 0;
}
