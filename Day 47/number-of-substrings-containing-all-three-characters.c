#include <stdio.h>
#include <string.h>

int numberOfSubstrings(char *s)
{
    int n = strlen(s);
    int count[3] = {0}; // count[0] for 'a', count[1] for 'b', count[2] for 'c'
    int left = 0;
    int result = 0;

    for (int right = 0; right < n; right++)
    {
        // Add current character to window
        count[s[right] - 'a']++;

        // Shrink window from left while all three characters are present
        while (count[0] > 0 && count[1] > 0 && count[2] > 0)
        {
            // All substrings from current left to end of string are valid
            result += n - right;

            // Remove leftmost character and move left pointer
            count[s[left] - 'a']--;
            left++;
        }
    }

    return result;
}

// Test function
int main()
{
    char s1[] = "abcabc";
    char s2[] = "aaacb";
    char s3[] = "abc";

    printf("Input: %s, Output: %d\n", s1, numberOfSubstrings(s1));
    printf("Input: %s, Output: %d\n", s2, numberOfSubstrings(s2));
    printf("Input: %s, Output: %d\n", s3, numberOfSubstrings(s3));

    return 0;
}
