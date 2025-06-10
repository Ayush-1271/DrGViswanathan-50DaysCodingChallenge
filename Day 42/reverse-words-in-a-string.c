char* reverseWords(char* s) {
    int len = strlen(s);
    char* temp = (char*)malloc(len + 1);  // Temporary buffer for trimmed string
    int j = 0;
    
    // Step 1: Trim and reduce spaces
    int i = 0;
    while (s[i] == ' ') i++; // skip leading spaces

    while (i < len) {
        if (s[i] != ' ') {
            temp[j++] = s[i++];
        } else {
            temp[j++] = ' ';
            while (s[i] == ' ') i++; // skip multiple spaces
        }
    }
    if (j > 0 && temp[j-1] == ' ') j--; // remove trailing space
    temp[j] = '\0';

    // Step 2: Split words
    char* words[10000]; // max words = s.length
    int count = 0;
    char* token = strtok(temp, " ");
    while (token) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    // Step 3: Build result string in reverse order
    char* result = (char*)malloc(len + 1);
    result[0] = '\0';
    for (int k = count - 1; k >= 0; k--) {
        strcat(result, words[k]);
        if (k != 0) strcat(result, " ");
    }

    free(temp); // Free the temporary buffer
    return result;
}
