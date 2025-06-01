char* makeSmallestPalindrome(char* s) {
    int n = strlen(s);
    char* result = strdup(s);  // Make a modifiable copy

    int i = 0, j = n - 1;
    while (i < j) {
        if (result[i] != result[j]) {
            char smaller = result[i] < result[j] ? result[i] : result[j];
            result[i] = result[j] = smaller;
        }
        i++;
        j--;
    }

    return result;
}
