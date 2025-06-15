#include <stdio.h>

int hammingWeight(int n)
{
    int count = 0;

    // Method 1: Most efficient - Brian Kernighan's algorithm
    // n &= (n-1) clears the lowest set bit
    while (n != 0)
    {
        count++;
        n &= (n - 1);
    }

    return count;
}

// Alternative method 1: Simple bit checking
int hammingWeightMethod2(int n)
{
    int count = 0;
    while (n != 0)
    {
        count += n & 1; // Check if last bit is 1
        n >>= 1;        // Right shift by 1
    }
    return count;
}

// Alternative method 2: Using built-in function (GCC specific)
int hammingWeightBuiltIn(int n)
{
    return __builtin_popcount(n);
}

// Test function
int main()
{
    int test1 = 11;         // Binary: 1011
    int test2 = 128;        // Binary: 10000000
    int test3 = 2147483645; // Binary: 1111111111111111111111111111101

    printf("Input: %d, Output: %d\n", test1, hammingWeight(test1));
    printf("Input: %d, Output: %d\n", test2, hammingWeight(test2));
    printf("Input: %d, Output: %d\n", test3, hammingWeight(test3));

    // Test alternative methods
    printf("\nTesting alternative methods:\n");
    printf("Method 2 - Input: %d, Output: %d\n", test1, hammingWeightMethod2(test1));
    printf("Built-in - Input: %d, Output: %d\n", test1, hammingWeightBuiltIn(test1));

    return 0;
}
