int calculate(char* s) {
    int stack[100000]; // Stack to store previous results and signs
    int top = -1;
    int result = 0;
    int sign = 1;
    int i = 0;

    while (s[i] != '\0') {
        if (s[i] >= '0' && s[i] <= '9') {
            int num = 0;
            // Read the full number
            while (s[i] >= '0' && s[i] <= '9') {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            result += sign * num;
            continue;  // Already moved i
        } else if (s[i] == '+') {
            sign = 1;
        } else if (s[i] == '-') {
            sign = -1;
        } else if (s[i] == '(') {
            // Push current result and sign onto stack
            stack[++top] = result;
            stack[++top] = sign;
            result = 0;
            sign = 1;
        } else if (s[i] == ')') {
            int prevSign = stack[top--];
            int prevResult = stack[top--];
            result = prevResult + prevSign * result;
        }
        // Skip whitespace and move to next character
        i++;
    }

    return result;
}
