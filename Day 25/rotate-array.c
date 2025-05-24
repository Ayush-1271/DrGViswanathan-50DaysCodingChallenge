void reverse(int* nums, int start, int end) {
    while (start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

void rotate(int* nums, int numsSize, int k) {
    if (numsSize == 0 || k == 0) return;

    k = k % numsSize;  // To handle cases where k > numsSize
    if (k == 0) return;

    reverse(nums, 0, numsSize - 1);        // Reverse the whole array
    reverse(nums, 0, k - 1);               // Reverse the first k elements
    reverse(nums, k, numsSize - 1);        // Reverse the remaining n-k elements
}
/*
k = 3

1 2 3 4 5 6 7
7 6 5 4 3 2 1
5 6 7 4 3 2 1
5 6 7 1 2 3 4
*/
