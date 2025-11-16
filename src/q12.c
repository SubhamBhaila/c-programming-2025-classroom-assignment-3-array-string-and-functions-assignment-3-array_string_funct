//  Write a function named isPalindrome that takes a string as input and returns 1 if it is a palindrome (reads the same forwards and backwards), and 0 otherwise.
#include <stdio.h>

int isPalindrome(char str[]) {
    int i = 0, j = 0;

    while (str[j] != '\0') {
        j++;
    }
    j--;

    while (i < j) {
        if (str[i] != str[j]) {
            return 0;
        }
        i++;
        j--;
    }

    return 1;
}
