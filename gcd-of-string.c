int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

char* gcdOfStrings(char* str1, char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    // Check if str1 + str2 equals str2 + str1
    char* concat1 = malloc(len1 + len2 + 1);
    char* concat2 = malloc(len1 + len2 + 1);
    
    strcpy(concat1, str1);
    strcat(concat1, str2);
    
    strcpy(concat2, str2);
    strcat(concat2, str1);
    
    if (strcmp(concat1, concat2) != 0) {
        free(concat1);
        free(concat2);
        return "";  // No common divisor string
    }
    
    free(concat1);
    free(concat2);

    // Find GCD of lengths
    int gcdLen = gcd(len1, len2);

    // Extract substring of length gcdLen from str1
    char* result = malloc(gcdLen + 1);
    strncpy(result, str1, gcdLen);
    result[gcdLen] = '\0';

    return result;
}
