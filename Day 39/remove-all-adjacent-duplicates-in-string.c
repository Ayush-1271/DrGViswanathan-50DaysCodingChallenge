char* removeDuplicates(char* s) {
    int len = strlen(s);
    char* stack = (char*)malloc(sizeof(char) * (len + 1));
    int top = -1;

    for (int i = 0; i < len; ++i) {
        if (top >= 0 && stack[top] == s[i]) {
            // Remove duplicate
            top--;
        } else {
            // Push character to stack
            stack[++top] = s[i];
        }
    }

    stack[top + 1] = '\0';  // Null-terminate the result string
    return stack;
}
