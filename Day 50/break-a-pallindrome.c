#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *breakPalindrome(char *palindrome)
{
    int n = strlen(palindrome);
    if (n == 1)
    {
        // Impossible to make a non-palindrome
        char *empty = (char *)malloc(1);
        empty[0] = '\0';
        return empty;
    }
    char *result = strdup(palindrome);
    // Try to change the first non-'a' character in the first half to 'a'
    for (int i = 0; i < n / 2; ++i)
    {
        if (result[i] != 'a')
        {
            result[i] = 'a';
            return result;
        }
    }
    // If all are 'a', change the last character to 'b'
    result[n - 1] = 'b';
    return result;
}

// Example usage
int main()
{
    char s1[] = "abccba";
    char s2[] = "a";
    printf("%s\n", breakPalindrome(s1)); // Output: aaccba
    printf("%s\n", breakPalindrome(s2)); // Output: (empty string)
    return 0;
}