int findNthDigit(int n) {
    long long digitCount = 1;
    long long range = 9;
    long long start = 1;
    
    // Step 1: Locate the range where the nth digit is
    while (n > digitCount * range) {
      
        n -= digitCount * range;
        digitCount++;
        range *= 10;
        start *= 10;
    }
    
    // Step 2: Find the actual number in that range
    long long number = start + (n - 1) / digitCount;

    // Step 3: Convert the number to a string and find the target digit
    char numberStr[20]; // Enough to hold any long long number
    sprintf(numberStr, "%lld", number);
    
    int digitIndex = (n - 1) % digitCount;
    return numberStr[digitIndex] - '0';
}
