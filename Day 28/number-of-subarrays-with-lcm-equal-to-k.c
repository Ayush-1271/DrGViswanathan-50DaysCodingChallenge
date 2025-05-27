// Function to compute GCD
int gcd(int a, int b) {
    while (b) {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

// Function to compute LCM
int lcm(int a, int b) {
    // LCM(a, b) = (a * b) / GCD(a, b)
    return (a / gcd(a, b)) * b;
}

int subarrayLCM(int* nums, int numsSize, int k) {
    int count = 0;
    
    for (int i = 0; i < numsSize; i++) {
        int currLCM = nums[i];
        
        if (k % currLCM != 0) continue; // early skip
        
        for (int j = i; j < numsSize; j++) {
            currLCM = lcm(currLCM, nums[j]);
            if (currLCM > k) break;
            if (currLCM == k) count++;
        }
    }
    
    return count;
}
