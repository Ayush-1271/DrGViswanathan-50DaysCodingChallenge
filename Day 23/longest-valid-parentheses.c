int longestValidParentheses(char* s) {
    int maxLen = 0;
    int len = strlen(s);
    int stack[len + 1];  // Stack to store indices
    int top = -1;
    stack[++top] = -1;   // Base for calculating lengths

    for (int i = 0; i < len; i++) {
        if (s[i] == '(') {
            stack[++top] = i;  // Push index of '('
        } else {
            top--;  // Pop the matching '('
            if (top == -1) {
                stack[++top] = i;  // No matching '(', reset base
            } else {
                int validLen = i - stack[top];
                if (validLen > maxLen) {
                    maxLen = validLen;
                }
            }
        }
    }

    return maxLen;
}
