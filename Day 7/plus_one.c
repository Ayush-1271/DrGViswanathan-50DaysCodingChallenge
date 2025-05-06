int* plusOne(int* digits, int digitsSize, int* returnSize) {
    // Allocate extra space in case we need to expand the array
    int* result = (int*)malloc((digitsSize + 1) * sizeof(int));

    // Copy input to result (since we might need to modify it)
    for (int i = 0; i < digitsSize; i++) {
        result[i] = digits[i];
    }

    // Traverse from end to start
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (result[i] < 9) {
            result[i]++;
            *returnSize = digitsSize;
            return result;
        } else {
            result[i] = 0;
        }
    }

    // If all digits were 9
    result[0] = 1;
    for (int i = 1; i <= digitsSize; i++) {
        result[i] = 0;
    }
    *returnSize = digitsSize + 1;
    return result;
}int* plusOne(int* digits, int digitsSize, int* returnSize) {
    // Allocate extra space in case we need to expand the array
    int* result = (int*)malloc((digitsSize + 1) * sizeof(int));

    // Copy input to result (since we might need to modify it)
    for (int i = 0; i < digitsSize; i++) {
        result[i] = digits[i];
    }

    // Traverse from end to start
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (result[i] < 9) {
            result[i]++;
            *returnSize = digitsSize;
            return result;
        } else {
            result[i] = 0;
        }
    }

    // If all digits were 9
    result[0] = 1;
    for (int i = 1; i <= digitsSize; i++) {
        result[i] = 0;
    }
    *returnSize = digitsSize + 1;
    return result;
}
