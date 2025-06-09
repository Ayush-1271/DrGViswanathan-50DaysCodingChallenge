// Function to find the longest common prefix
char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";

    // Start by assuming the whole first string is the common prefix
    char* prefix = strs[0];
    int prefixLen = strlen(prefix);

    for (int i = 1; i < strsSize; ++i) {
        int j = 0;

        // Compare prefix with current string character by character
        while (j < prefixLen && strs[i][j] == prefix[j]) {
            j++;
        }

        // Update prefix length to matched characters
        prefixLen = j;

        // If at any point, prefix length becomes 0, there is no common prefix
        if (prefixLen == 0) {
            return "";
        }
    }

    // Allocate memory for result and copy prefix substring
    char* result = (char*)malloc((prefixLen + 1) * sizeof(char));
    strncpy(result, prefix, prefixLen);
    result[prefixLen] = '\0';

    return result;
}
