char* minRemoveToMakeValid(char* s) {
    int len = strlen(s);
    int* stack = (int*)malloc(sizeof(int) * len);
    bool* toRemove = (bool*)calloc(len, sizeof(bool));  // Marks characters to be removed
    int top = -1;

    for (int i = 0; i < len; i++) {
        if (s[i] == '(') {
            stack[++top] = i;  // Push index of '(' onto stack
        } else if (s[i] == ')') {
            if (top >= 0) {
                top--;  // Matched pair found, pop the stack
            } else {
                toRemove[i] = true;  // Unmatched ')'
            }
        }
    }

    // Mark all unmatched '(' for removal
    while (top >= 0) {
        toRemove[stack[top--]] = true;
    }

    // Build result string excluding marked characters
    char* result = (char*)malloc(sizeof(char) * (len + 1));
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (!toRemove[i]) {
            result[j++] = s[i];
        }
    }
    result[j] = '\0';

    free(stack);
    free(toRemove);
    return result;
}
