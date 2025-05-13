int reverse(int x) {
    int reversed = 0;
    
    while (x != 0) {
        int digit = x % 10;
        x /= 10;

        // −2^31 to 2^31 -1 -> (−2147483648 to 2147483647) -- 32-bit signed integer range
        // **Check for overflow/underflow before multiplying by 10**
        if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && digit > 7)) {
            return 0; // Overflow detected
        }
        if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && digit < -8)) {
            return 0; // Underflow detected
        }

        reversed = reversed * 10 + digit;
    }
    
    return reversed;
}
