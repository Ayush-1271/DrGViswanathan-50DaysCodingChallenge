#include <stdbool.h>

// Helper function to compute GCD of two numbers
int gcd(int a, int b)
{
    while (b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

bool isGoodArray(int *nums, int numsSize)
{
    int g = nums[0];
    for (int i = 1; i < numsSize; ++i)
    {
        g = gcd(g, nums[i]);
        if (g == 1)
            return true;
    }
    return g == 1;
}