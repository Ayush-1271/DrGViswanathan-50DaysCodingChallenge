/*
//slow, dynamic approach
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

*/

// Count number of 1s in binary representation
int countSetBits(int n) {
    
    int count = 0;
    while (n) {
        n &= (n - 1);  // Clear the lowest set bit
        count++;
    }
    return count;
}

int countPrimeSetBits(int left, int right) {

    static bool isPrime[21] = {
        false, false, true, true, false, true, false, true, false, false,
        false, true, false, true, false, false, false, true, false, true, false
    };

    int result = 0;
    for (int i = left; i <= right; i++) {
        int bits = countSetBits(i);
        if (isPrime[bits]) {
            result++;
        }
    }
    return result;
}
