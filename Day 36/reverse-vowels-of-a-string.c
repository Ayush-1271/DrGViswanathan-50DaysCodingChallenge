#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int isVowel(char c) {
    c = tolower(c);  // for case-insensitive comparison
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

char* reverseVowels(char* s) {
    int left = 0;
    int right = strlen(s) - 1;
    char temp;

    while (left < right) {
        while (left < right && !isVowel(s[left])) left++;
        while (left < right && !isVowel(s[right])) right--;

        // Swap vowels
        if (left < right) {
            temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
    }

    return s;
}
