bool isValid(char* s) {
    int len = strlen(s);
    char* stack = (char*)malloc(len);  // Allocate memory for the stack
    int top = -1; // Stack pointer

    for (int i = 0; i < len; ++i) {
        char c = s[i];
        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c; // Push to stack
        } else {
            if (top == -1) {
                free(stack);
                return false; // No matching opening bracket
            }
            char open = stack[top--]; // Pop from stack
            if ((c == ')' && open != '(') ||
                (c == '}' && open != '{') ||
                (c == ']' && open != '[')) {
                free(stack);
                return false; // Bracket mismatch
            }
        }
    }

    bool isValid = (top == -1); // Stack should be empty if valid
    free(stack); // Free allocated memory
    return isValid;
}
