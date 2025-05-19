int evalRPN(char** tokens, int tokensSize) {
    int stack[tokensSize];
    int top = -1;

    for (int i = 0; i < tokensSize; i++) {
        char* token = tokens[i];

        // If it's an operator
        if (strcmp(token, "+") == 0 || strcmp(token, "-") == 0 || 
            strcmp(token, "*") == 0 || strcmp(token, "/") == 0) {
            
            int b = stack[top--];  // Second operand
            int a = stack[top--];  // First operand
            int result = 0;

            if (strcmp(token, "+") == 0) {
                result = a + b;
            } else if (strcmp(token, "-") == 0) {
                result = a - b;
            } else if (strcmp(token, "*") == 0) {
                result = a * b;
            } else if (strcmp(token, "/") == 0) {
                result = a / b;  // Integer division truncates toward zero
            }

            stack[++top] = result;

        } else {
            // It's an operand (convert to integer and push onto stack)
            stack[++top] = atoi(token);
        }
    }

    return stack[top];
}
